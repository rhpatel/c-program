#include<stdio.h>
main()
{
int i,j,k,n,num;
//printf("Enter the number...\n");
//scanf("%d",&num);

for(i=-4;i<=4;i++)
{
k=i;
if(k<0)
k=-k;
n=5-k;
for(j=1;j<=2*n-1;j++)
{if(j%2==0)
printf("*");
else
printf("%d",n);
}
printf("\n");
}}
