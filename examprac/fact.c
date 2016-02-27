#include<stdio.h>
main()
{
int i,j,fact=1;
printf("Enter the number\n");
scanf("%d",&j);

//for(i=1;i<=j;i++)
for(;j;j--)
fact=fact*j;

printf("factorial=%d",fact);
}
