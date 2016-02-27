#include<stdio.h>
main()
{
int a[20],i,j,k,n,sum=0;
printf("Enter the value of n...\n");
scanf("%d",&n);

for(i=0;i<20;i++)
a[i]=i*i;

for(i=0;i<=n;i++)
   sum=sum+a[i];

printf("sum=%d",sum);
}












