#include<stdio.h>
main()
{
int i,num,fact=1;
printf("enter the number\n");
scanf("%d",&num);
/*//////////////*
for(i=1;i<=num;i++)
fact=fact*i;
*///////////

for(num;num>=1;num--)
fact=fact*num;

printf("%d",fact);
}
