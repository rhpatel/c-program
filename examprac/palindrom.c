#include<stdio.h>
main()
{
int i,num,sum;
//////////////////////////////////////////////Check for palindrom//////////////
/*
printf("Enter the number...\n");
scanf("%d",&num);
i=num;
for(;num;num=num/10)
sum=sum*10+num%10;

printf("%d",sum);
if(i==sum)
printf("Number is palindrom");
*/
for(i=1;i<=1000;i++)
{
num=i;
sum=0;

for(;num;num=num/10)
{
sum=sum*10+num%10;
if(sum==i)
printf("%d\t",i);
}}}
