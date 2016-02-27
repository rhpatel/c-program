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
	B **p,*temp;
	int i,num,choice,j,c;
	printf("Enter the number of student...\n");
	scanf("%d",&num);
	p=malloc(sizeof(p)*num);
	for(i=0;i<num;i++)
		p[i]=malloc(sizeof(B));
	///////////////////////////////  IF you Want to write a file First////////////////////////////////////////
	//fp=fopen("data_struct","w");
	/*
	   for(i=0;i<num;i++)
	   {
	   printf("Enter the Details of %d student\nrollno\nname\nmarks\n",i+1);
	   scanf("%d %s %f",&p[i]->rollno,p[i]->name,&p[i]->marks);
	   }
	   for(i=0;i<num;i++)
	   {
	   printf("Details of %d student",i+1);
	   printf("\n%d\n%s\n%f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	   }
	   for(i=0;i<num;i++)
	   fprintf(fp,"\nRolno=%d\nName=%s\nMarks=%f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	 */
	///////////////////////////OPEN Already Written file///////////////////////////////////////////////////////
	fp=fopen("data_struct","r");
	for(i=0;i<num;i++)
		fscanf(fp,"\nRolno=%d\nName=%s\nMarks=%f\n",&p[i]->rollno,p[i]->name,&p[i]->marks);
	/*
	   for(i=0;i<num;i++)
	   {
	   printf("Details of %d student",i+1);
	   printf("\n%d\n%s\n%f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	   }
	 */
	printf("Enter the choice for sort\n1)rollno\n2)name\n3)marks\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			for(i=0;i<num-1;i++)
			{
				for(j=0;j<num-1-i;j++)
				{ 
					if((p[j]->rollno)>(p[j+1]->rollno))
					{
						temp=p[j];
						p[j]=p[j+1];
						p[j+1]=temp;
					}
				}
			}
			break;
		case 2:
			for(i=0;i<num-1;i++)
			{
				for(j=0;j<num-1-i;j++)
				{   
					if((strcmp(p[j]->name,p[j+1]->name))==1)
					{
						temp=p[j];
						p[j]=p[j+1];
						p[j+1]=temp;
					}
				}
			}
			break;
		case 3:
			for(i=0;i<num-1;i++)
			{
				for(j=0;j<num-1-i;j++)
				{ 
					if((p[j]->marks)>(p[j+1]->marks))
					{
						temp=p[j];
						p[j]=p[j+1];
						p[j+1]=temp;
					}
				}
			}
	}
	for(i=0;i<num;i++)
	{
		printf("Details of %d student",i+1);
		printf("\n%d\n%s\n%f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	}
	fp=fopen("data_struct_sort","w");
	for(i=0;i<num;i++)
		fprintf(fp,"\nRolno=%d\nName=%s\nMarks=%f\n",p[i]->rollno,p[i]->name,p[i]->marks);
}


