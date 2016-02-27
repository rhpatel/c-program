#include<stdio.h>
main()
{
int num,pow;
scanf("%d%d",&num,&pow);

abc:
//num=num/pow;
if(num>pow)
{
num=num/pow;
goto abc;
}
if(num%pow==0)
printf("power");
else
printf("No");
}
