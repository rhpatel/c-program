#include<stdio.h>
main()
{
int num1=0,num2=1,j,k=2;
printf("%d\t%d\t",num1,num2);
for(k;k<15;)
{
j=num2+num1;
printf("%d\t",j);
num1=num2;
num2=j;
k++;
}}

