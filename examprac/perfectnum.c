#include<stdio.h>
main()
{
int num,sum=0,i,j;

/////////////////////////////////////////check for perfect/////////////////////////////////
/*
printf("Enter the number..\n");
scanf("%d",&num);
for(i=1;i<num;i++)
{
if(num%i==0)
{
sum=sum+i;
}
}

if(sum==num)
printf("Number is perfect");
*/
////////////////////////////////////Range of perfect/////////////////////////
for(j=1;j<=1000;j++)
{
num=j;
sum=0;
for(i=1;i<num;i++)
{
if(num%i==0)
{
sum=sum+i;
}
}
if(sum==j)
printf("%d\t",j);
}}
