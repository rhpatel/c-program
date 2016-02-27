#include<stdio.h>
main()
{
int num,i=1,fact=1;
printf("Enter the number");
scanf("%d",&num);

abc:
fact=fact*i;
i++;
if(i<=num)
goto abc;
printf("%d\n",fact);
}
