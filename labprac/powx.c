#include<stdio.h>
main()
{
int num,pow;
printf("Enter the number");
scanf("%d",&num);
printf("Enter the power");
scanf("%d",&pow);
abc:
num=num/pow;
if(num>pow)
 goto abc;

if (num%pow==0)
printf("YES\n");
else 
printf("No\n");
}
