#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	int rollno;
	char name[10];
	float marks;
	struct student *next;
}B;
void read(B **);
void add_begin(B **);
void add_end(B **);
void add_middle(B **);
void print(B *);
void save(B *);
main()
{

	B *headptr=0;
	char ch;


	read(&headptr);
	print(headptr);
	do
	{
		//	add_begin(&headptr);
		//	add_end(&headptr);
		add_middle(&headptr);
		printf("Do you want to add node Y/y  \n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	save(headptr); 
	print(headptr);
}

void add_begin(B **ptr)
{
	B *new;
	new=malloc(sizeof(B));
	printf("Enter the rollno name and marks,,\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	new->next=*ptr;
	*ptr=new;
}


void add_end(B **ptr)
{
	B *new,*old,*temp;
	new=malloc(sizeof(B));
	printf("Enter the rollno name and marks,,\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	if(*ptr==0)
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
	{
		temp=*ptr;
		while(temp)
		{
			old=temp;
			temp=temp->next;
		}
		new->next=old->next;
		old->next=new; 
 	}
}

void add_middle(B **ptr)
{
	B *new,*old,*temp;
	new=malloc(sizeof(B));
	printf("Enter the rollno name and marks,,\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);

	if(*ptr==0 ||(*ptr)->rollno>new->rollno)
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
	{old=*ptr;
		while(old)
		{ 
			if(old->next==0||old->next->rollno>new->rollno)
			{
				new->next=old->next;
				old->next=new;
				break;
			}
			old=old->next;
		}
	}                       
}              

void read(B **ptr)
{

	B *new,*old,v;
	FILE *fp;
	fp=fopen("data","r");
	if(fp==0)
	{
		printf("no data file\n");
		return;
	}
	while((fscanf(fp,"%d %s %f",&v.rollno,v.name,&v.marks))!=EOF)
	{
		new=malloc(sizeof(B));
		*new=v;
		if(*ptr==0)
		{
			new->next=*ptr;
			*ptr=new;
			old=new;
		}
		else
		{
			new->next=old->next;
			old->next=new;
			old=new;
		}
	}
}

void print(B *ptr)
{

	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}

}
void save(B *ptr)
{
	FILE *fp;
	fp=fopen("data","w");
	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}

}


