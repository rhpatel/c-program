#include<stdio.h>
#include<stdlib.h>
typedef struct cricket
{ char name[20];
	int age;
	int match;
	float avg;
}B;
void add(B **); 
void print(B **);
void sort(B **);
main()
{
	int i;
	B **p;

	p=malloc(sizeof(p)*5);
	for(i=0;i<5;i++)
		p[i]=malloc(sizeof(B));


	add(p);
	printf("Before\n");
	print(p);
	sort(p);
	printf("after\n");
	print(p);
}

void add(B **p)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter the name age match avg\n");
		scanf("%s %d %d %f",p[i]->name,&p[i]->age,&p[i]->match,&p[i]->avg);
	}
}

void print(B **p)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("name=%s\n age=%d\n match=%d\n average=%f\n--------\n",p[i]->name,p[i]->age,p[i]->match,p[i]->avg);
	}
}

void sort(B **p)
{
	B *temp;
	int i,j;
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			if(p[j]->avg>p[j+1]->avg)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}}}}



