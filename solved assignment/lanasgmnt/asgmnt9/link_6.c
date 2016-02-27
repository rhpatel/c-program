//6) Write a Singly linked list program to delete a perticular according to any signature of a given structure.\


#include"header.h"

void del_node(B **);

main()
{
	B *headptr=0;
	char ch;
	read(&headptr);
	print(headptr);
	printf("\n---------------\n");
	do
	{
		add_begin(&headptr);
		printf("Do you want to add Y/y\n");
		scanf(" %c",&ch);
	}while(ch=='Y' || ch=='y');

	print(headptr);
	save(headptr);
	del_node(&headptr);

	printf("\n----------------\n");
	print(headptr);
}

void del_node(B **ptr)
{
	int c,i=0,j,n;
	B **p,*temp,*temp1,v;
	c=count(*ptr);
	temp=*ptr;
	p=malloc(sizeof(B*)*c);

	while(temp)
	{
		p[i++]=temp;
		temp=temp->next;
	}


	printf("Enter the rollno want to delete\n");
	scanf("%d",&n);

	for(i=0;i<c;i++)
	{
		if(p[i]->rollno==n)
		{ 
			if(i==0)
			{
				*ptr=p[i]->next;
				free(p[i]);
			} 
			else
			{
				p[i-1]->next=p[i]->next;
				free(p[i]);
			}
			for(j=i;j<c-1;j++)
				p[j]=p[j+1];

		}

	}

}

