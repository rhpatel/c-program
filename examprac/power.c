#include<stdio.h>
main()
{
int num,r,pow;
printf("Enter the number and power");
scanf("%d%d",&num,&pow);

while(1)
{
r=num%pow;
if(r)
break;
num=num/pow;
}
if(num==1)
printf("power");
else
printf("no power");

printf("\n");
}
