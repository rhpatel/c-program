#include<stdio.h>
main()
{

int i,j,k;
for(i=-5;i<=5;i++)
{
for(j=1;j<=6;j++)
{
k=i;
if(k<0)
k=-k;
if(j<=k)
printf(" ");
else
printf("* ");
}
printf("\n");
}}
