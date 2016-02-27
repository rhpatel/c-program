#include<stdio.h>
main()
{
int i,j,k,num;
char ch,ch1;
printf("Enter the number of row");
scanf("%d",&num);


for(i=1;i<=num;i++)
	{
	ch='A';
		for(k=num;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)
		{
		printf("%c ",ch);
		ch++;
		}	

		printf("\n");
		}
      ch='B';
for(i=1;i<num;i++)
{ch1=ch;
	for(k=0;k<=i;k++)
        printf(" ");
        for(j=num-1;j>=i;j--)
          {
		printf("%c ",ch1);
             ch1++;}
ch++;
printf("\n");
}}


