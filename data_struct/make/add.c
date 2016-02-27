#include"header.h"

void add_begin(B **ptr)
{

	B *new;
	new=malloc(sizeof(B));              //1)memory assign

	printf("Enter the rollno name and marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);   //2)scanning the data

	new->next=*ptr;                     //3)Establish the link
	*ptr=new;

}

void add_end(B **ptr)
{
	B *new,*old,*temp;
	new=malloc(sizeof(B));              //1)memory assign

	printf("Enter the rollno name and marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);   //2)scanning the data

	if(*ptr==0)                                             //3)Establish links
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
	new=malloc(sizeof(B));              //1)memory assign

	printf("Enter the rollno name and marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);   //2)scanning the data

	if(*ptr==0||(*ptr)->rollno>new->rollno)
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
	{
	temp=*ptr;
		while(temp)
		{

			if(temp->next==0 ||  temp->next->rollno>new->rollno)
			{     /*if(temp->rollno==new->rollno)
                                {
                                 printf("Data duplication\n");
                                 return;                                   
                                }*/
				new->next=temp->next;
				temp->next=new;
				break;
			}
			temp=temp->next;

		}
	}   


}





            














