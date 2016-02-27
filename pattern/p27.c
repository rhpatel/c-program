#include<stdio.h>
main()
{
int i,j,k;
for(i=-4;i<=4;i++)
{
k=i;
if(k<0)
k=-k;
for(j=1;j<=9-2*k;j++)
{
if(j%2==0)
printf("*");
else
printf("%d",5-k);
}printf("\n");

}}
