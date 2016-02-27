#include<stdio.h>
#include<stdlib.h>

typedef struct student
          {
           int rollno;
           char name[10];
           float marks;
           struct student *next;
          }B;
void add_begin(B**);
void print(B*);
main()
{
char ch;
B *headptr=0;
do
{
add_begin(&headptr);
printf("Do you want to add new node\n");
scanf(" %c",&ch);
}while((ch=='Y')||(ch=='y'));

print(headptr);
}


void add_begin(B **p)
{

B *temp;

temp=malloc(sizeof(B));
printf("Enter roll no\n");
scanf("%d",&temp->rollno);

printf("Enter Name\n");
scanf("%s",temp->name);


printf("Enter marks\n");
scanf("%f",&temp->marks);

temp->next=*p;
*p=temp;
}

void print(B *p1)
{
while(p1)
{
printf("%d %s %f\n",p1->rollno,p1->name,p1->marks);
p1=p1->next;
}
}









