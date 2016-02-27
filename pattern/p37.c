
#include<stdio.h>
main()
{
int i,j,k,n,num;
printf("Enter the number \n");
scanf("%d",&num);
for(i=0;i<num;i++)
{
for(j=num;j>=i;j--)
{
printf(" ");
}
n=1;
printf("%d ",n);
for(k=0;k<i;k++)
{
n=n*(i-k)/(k+1);
printf("%d ",n);
}
printf("\n");
}}
