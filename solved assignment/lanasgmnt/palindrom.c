#include<stdio.h>
main()
{
int i,j,num;
for(i=1;i<=1000;i++)
{
num=i;
int sum=0;
for(;num;num=num/10)
 sum=sum*10+num%10;
if(i==sum)
{
printf("%d\t",sum);
}
}}
