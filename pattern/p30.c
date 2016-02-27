#include<stdio.h>
main()
{
int i,j,num,k,l;
printf("Enter the number of rows");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
printf("%d",i);
l=i;
for(j=1,k=num-1;j<=i-1;k--,j++)
{
l=l+k;
printf("%d",l);
}
printf("\n");
}}
