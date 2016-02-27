#include"header.h"


//Simple print
void print(B *ptr)
{
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}

//print using recursion

void print_rec(B *ptr)
{

	if(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		print_rec(ptr->next);
	}
}

// print reverse using recursion

void print_rev_rec(B *ptr)
{

	if(ptr)
	{
		print_rev_rec(ptr->next);
			printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
         }
}	

// print reverse without recursion
//#logic 1
void print_rev(B *ptr)
{
	B *temp;

	int i,j,c;
	c=count(ptr);

	for(i=0;i<c;i++)
	{temp=ptr;
		for(j=0;j<c-1-i;j++)
			temp=temp->next;
		printf("%d %s %f\n",temp->rollno,temp->name,temp->marks);
	}
}

// print reverse without recursion
//#logic 2;

void print_rev1(B *ptr)
{
	B **p,*temp;
	temp=ptr;
	int c;
	c=count(ptr);
	p=malloc(sizeof(B*)*c);

       int i=0;
	while(temp)
	{
		p[i++]=temp;
         	temp=temp->next;
	}

	for(i=c-1;i>=0;i--)
	{
		printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	}
}


































