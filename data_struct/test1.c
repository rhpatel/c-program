#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int rollno;
	char name[10];
	float marks;
	struct student *next;
}B;

void add_middle(B **);
void print(B *);
void save(B *);
void read(B **);
main()
{
	char ch;
	B *headptr=0;
	read(&headptr);
        print(headptr);	
do
	{
		add_middle(&headptr);
		printf("Do you want to add node  Y/y \n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));

	print(headptr);
	save(headptr);
}

void add_middle(B **ptr)
{
	B *new,*old;
	new=malloc(sizeof(B));

        printf("Enter the rollno name marks.\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);

	if(*ptr==0 || new->rollno<=(*ptr)->rollno)
	{ if(new->rollno==(*ptr)->rollno)
              { printf("data Duplicate\n");
                                return;
                               }
		new->next=*ptr;
		*ptr=new;
	}

	else
	{
		old=*ptr;
		while(old)
		{       

			if(old->next==0||old->next->rollno>=new->rollno)
			{   if(old->next->rollno==new->rollno)
                              { printf("data Duplicate\n");
                                return;
                               }
                               new->next=old->next;
				old->next=new;
				break;
			}

                                old=old->next;
                     }
	}}

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

void read(B **ptr)
{

	FILE *fp;
	fp=fopen("data","r");
        if(fp==0)
         { printf("no such file present\n");
            return;
         }
           
	B *new,*old,v;

	while(fscanf(fp,"%d %s %f",&v.rollno,v.name,&v.marks)!=EOF)
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











