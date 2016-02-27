#include<stdio.h>
main()
{
int num,num1,rem,k;

printf("Enter the num....\n");
scanf("%d",&num);
num1=num;
int sum=0;
abc:
rem=num%10;
num=num/10;
sum=sum+(rem*rem*rem);
if(num>10)
goto abc;
sum=sum+(num*num*num);
printf("%d\n",sum);
printf("%d\n",num);
(sum==num1)?printf("Armstrong Num\n"):printf("Not armstrong num\n");
}
