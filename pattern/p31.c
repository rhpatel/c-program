#include<stdio.h>
main()
{
int i,j,num=5,k;
for(i=1;i<=num;i++)
{
for(k=i;k<=num;k++)
{
printf("  ");
}
for(j=1;j<=(2*i-1);j++)
{
printf("%d ",j);
}
printf("\n");
}
}
