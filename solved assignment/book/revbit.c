#include<stdio.h>
main()
{
int num,i,j,num1,num2;
printf("Enter the number ...\n");
scanf("%d",&num);
printf("Before reverse...\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");

for(i=31,j=0;i>j;i--,j++)
{
num1=num>>i&1;
num2=num>>j&1;
if(num1!=num2)
{
num=num^1<<i;
num=num^1<<j;
}}
printf("After reverse...\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
}
