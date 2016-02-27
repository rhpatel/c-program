#include<stdio.h>
main()
{
int i,j,num,sum=0,r;

for(i=1;i<=500;i++)
{
num=i;
sum=0;
	for(;num;num=num/10)
	{
	r=num%10;
	sum=sum+(r*r*r);
	}
		if(i==sum)
               printf("%d\n",sum);
}}
