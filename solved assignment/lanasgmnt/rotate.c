#include<stdio.h>
main()
{
unsigned int i,pos,num=0,num1,num2,num3;
//setbit

num=num|1<<0;
num=num|1<<1;
num=num|1<<3;
num=num|1<<31;

for(i=32;i>0;i--)
printf("%d",num>>(i-1)&1);

printf("\n");
num1=num>>3;
num2=num<<(31-2);
num3=num1|num2;


for(i=32;i>0;i--)
printf("%d",num3>>(i-1)&1);

printf("\n");
}
