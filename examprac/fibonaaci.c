#include<stdio.h>
main()
{

int num1=0,num2=1,num;
printf("%d\t%d",num1,num2);

for(;num<=50;)
{
num=num1+num2;
num1=num2;
num2=num;
if(num<=50)
printf("\t%d",num);
}}

