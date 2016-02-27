#include"header.h"

void add_begin(B **ptr)
{

	B *new;
	new=malloc(sizeof(B));

	printf("Enter the rollno and name\n");
	scanf("%d %s",&new->rollno,new->name);

	new->next=*ptr;
	*ptr=new;
} 

void print(B *ptr)
{
	while(ptr)
	{
		printf("%d %s\n",ptr->rollno,ptr->name);
		ptr=ptr->next;
	}
}

int count(B *ptr)
{
int c=0;
while(ptr)
{
c++;
ptr=ptr->next;
}
return(c);
}



void save(B *ptr)
{
FILE *fp;

fp=fopen("data","w");

while(ptr)
{
fprintf(fp,"%d %s\n",ptr->rollno,ptr->name);
ptr=ptr->next;
}

}


void read(B **ptr)
{

	B v,*new,*old,*temp;

	FILE *fp;
	fp=fopen("data","r");
if(fp==0)
{
printf("no such record\n");
return;
}

	while((fscanf(fp,"%d %s\n",&v.rollno,v.name))!=EOF)
	{
		new=malloc(sizeof(B));
		*new=v;

		if(*ptr==0)
		{
			new->next=*ptr;
			*ptr=new;
		}

		else
		{ temp=*ptr;
			while(temp->next)
			{
				temp=temp->next;
			}

			new->next=temp->next;
			temp->next=new; 
		}
	}
}


























