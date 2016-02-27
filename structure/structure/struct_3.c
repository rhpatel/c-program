
//DMA structure and student allocation.

#include<stdio.h>
#include<stdlib.h>
typedef struct A
{
	int rollno;
	char *ch;
	float marks;
	struct a
	{
		int date,month,year;
	}dob,doj;
}B;

main()
{
	B **p;
	int num,i,j;
	printf("Enter the number..\n");
	scanf("%d",&num);


	p=calloc(num,sizeof(B *));

	for(i=0;i<num;i++)
	{
                p[i]=malloc(sizeof(B));
		p[i]->ch=malloc(10*sizeof(char));
	}

	for(i=0;i<num;i++)
	{
		printf("Enter the values rollno name marks dob (d m y)..for student %d\n",i+1);
		scanf("%d %s %f %d %d %d",&p[i]->rollno,p[i]->ch,&p[i]->marks,&p[i]->dob.date,&p[i]->dob.month,&p[i]->dob.year);
	}

	for(i=0;i<num;i++)
	{
		printf("Student %d\n",i+1);
		printf("Rollno:%d\nName:%s\nMarks:%f\nBirthdate: %d:%d:%d\n\n",p[i]->rollno,p[i]->ch,p[i]->marks,p[i]->dob.date,p[i]->dob.month,p[i]->dob.year);
	}



}









