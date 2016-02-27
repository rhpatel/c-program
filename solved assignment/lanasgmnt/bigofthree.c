#include<stdio.h>
main()
{
int a,b,c;
printf("enter the three number...\n");
scanf("%d%d%d",&a,&b,&c);

a>b?a>c?printf("a is Greater"):printf("c is Greater"):b>c?printf("b is greater"):printf("c is greater");
} 
