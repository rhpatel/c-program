#include<stdio.h>
main()
{
int i,j,k;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j<=i)
printf("%d",j);
else
printf(" ");
}

for(k=5;k>=1;k--)
{
if(k<=i)
printf("%d",k);
else
printf(" ");
}

printf("\n");
}}
