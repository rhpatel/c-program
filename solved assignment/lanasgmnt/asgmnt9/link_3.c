// program to merge two Singly linked list.

#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int rollno;
	char name[10];
	float marks;
	struct student *next;
}B;

void add_begin(B **);
void print(B *);
void merge(B **,B*);

main()
{

	B *hp1=0,*hp2=0;
	char ch;
	printf("Enter the first node\n");
	do
	{
		add_begin(&hp1);
		printf("do you want to add node  Y/y");
		scanf(" %c",&ch);
	}while(ch=='Y' || ch=='y');

	printf("Enter the second node\n");


	do
	{
		add_begin(&hp2);
		printf("do you want to add node  Y/y");
		scanf(" %c",&ch);
	}while(ch=='Y' || ch=='y');

	print(hp1);
	printf("\n-----------------------\n");
	print(hp2);
	printf("\n-----------------------\n");
	merge(&hp1,hp2);
	print(hp1);

}


void add_begin(B **ptr)
{

	B *new;

	new=malloc(sizeof(B));
	printf("Enter the rollno name and marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);

	new->next=*ptr;
	*ptr=new;
}

void print(B *ptr)
{
	B *new;
	new=ptr;
	while(new)
	{
		printf("%d %s %f\n",new->rollno,new->name,new->marks);
		new=new->next;
	}
}


void merge(B **p1,B *p2)
{
	B *n1,*n2,*temp1,*temp2,*temp3;

	n1=*p1,n2=p2;

	while(n1)
	{
		temp1=n1->next;
		temp2=n2->next;

		if(n2)
		{
			n2->next=n1->next;
			n1->next=n2;
		}
		n1=temp1;
		n2=temp2;


		if(n1->next==0)
		{
			n1->next=n2;
			break;
		}


		if(n2==0)
		{
			break;
		}

	} 
}




















