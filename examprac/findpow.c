#include<stdio.h>
main()
{
int num,pow,i,j=1;
printf("Enter the number and power..\n");
scanf("%d%d",&num,&pow);


for(i=1;i<=pow;i++)
j=j*num;


printf("%d",j);
}
