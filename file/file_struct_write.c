#include<stdio.h>
#include<stdlib.h>
typedef struct A
        {int rollno;
         char name[10];
         float marks;
        }B;

main()
{
FILE *fp;
B **p;
int i,num;

printf("Enter the number of student...\n");
scanf("%d",&num);

p=malloc(sizeof(p)*num);

for(i=0;i<num;i++)
p[i]=malloc(sizeof(B));
fp=fopen("data_struct","w");

for(i=0;i<num;i++)
{
 printf("Enter the Details of %d student\nrollno\nname\nmarks\n",i+1);
 scanf("%d %s %f",&p[i]->rollno,p[i]->name,&p[i]->marks);
}

/*
for(i=0;i<num;i++)
{
 printf("Details of %d student",i+1);
 printf("\n%d\n%s\n%f\n",p[i]->rollno,p[i]->name,p[i]->marks);
}
*/

for(i=0;i<num;i++)
 fprintf(fp,"\nRolno=%d\nName=%s\nMarks=%f\n",p[i]->rollno,p[i]->name,p[i]->marks);


}


