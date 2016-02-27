#include<stdio.h>
#include<stdlib.h>

typedef struct student
         {
          int rollno;
          char name[10];
          float marks;
         struct student *next;
        }B;
void add_end(B **);
void print(B *);
main()
{
char ch;
B *headptr=0;
int node=0;
do
{
add_end(&headptr);
printf("do you want to add new node at end..Y/y\n");
scanf("  %c",&ch);
node++;
}while((ch=='Y')||(ch=='y'));
print(headptr);
printf("Total node=%d",node);
}

void add_end(B **p)
{
B *temp,*temp1;

temp=malloc(sizeof(B));
printf("Enter Rollno Name and Marks\n");
scanf("%d  %s %f",&temp->rollno,temp->name,&temp->marks);

if(*p==0)
{
temp->next=*p;
*p=temp;
}

else
{ temp1=*p;
   while(temp1->next)
      temp1=temp1->next;
  
   temp->next=temp1->next;
  temp1->next=temp;
}    

}

void print(B *p1)
{
FILE *fd;
fd=fopen("student_Record","w");
while(p1)
{
printf("%d %s %f\n",p1->rollno,p1->name,p1->marks);
fprintf(fd,"%d %s %f\n",p1->rollno,p1->name,p1->marks);
p1=p1->next;
}
}




























