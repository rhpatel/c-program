#include<stdio.h>
#include<stdlib.h>
typedef struct A
{
	int roll;
	char ch[10];
	float marks;
}ST;

main()
{
	ST **p;
	int i,j,num;
	printf("Enter the number of student :\n");
	scanf("%d",&num);

		p=calloc(num,sizeof(ST *));

	for(i=0;i<num;i++)
		p[i]=malloc(sizeof(ST));






}
























