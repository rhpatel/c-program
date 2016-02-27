#include<stdio.h>
#include<stdlib.h>
typedef struct student
{ 
	int rollno;
	char name[10];
	float marks;
	struct student *next;
}B;
void add_middle(B**);
void print(B *);
void save(B *);
void read(B **);
main()
{
	B *headptr=0;
	char ch;
	read(&headptr);
	do
	{
		add_middle(&headptr);
		printf("do you want to add node Y/y \n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print(headptr);
	save(headptr);
}

void add_middle(B **ptr)
{

	B *new,*old;

	new=malloc(sizeof(B));

	printf("Enter rollno name marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);

	if(*ptr==0|| new->rollno < (*ptr)->rollno)
	{  new->next=*ptr;
		*ptr=new;
	}
	else
	{
		old=*ptr;
		while(old)
		{
			if(old->next==0)
			{
				new->next=old->next;
				old->next=new;
				break;
			}



			if(old->next->rollno > new->rollno)
			{
				new->next=old->next;
				old->next=new;
				break;
			}


			old=old->next;
		}
	}
}

void print(B *p)
{
	while(p)
	{
		printf("%d %s %f\n",p->rollno,p->name,p->marks);
		p=p->next;
	}
}


void save(B *p)
{

	FILE *fp;
	fp=fopen("data","w");
	while(p)
	{    
		fprintf(fp,"%d %s %f\n",p->rollno,p->name,p->marks);
		p=p->next;
	}
}

void read(B **ptr)
{
	B v,*temp,*temp1;
	FILE *fp;
	fp=fopen("data","r");
	while(fscanf(fp,"%d %s %f",&v.rollno,v.name,&v.marks)!=EOF)
	{
		temp=malloc(sizeof(B));
		*temp=v;
		if(*ptr==0)
		{
			temp->next=*ptr;
			*ptr=temp;
			temp1=temp;
		}
		else
		{
			temp->next=temp1->next;
			temp1->next=temp;
			temp1=temp;
		}
	}
}


