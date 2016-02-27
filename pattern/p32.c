#include<stdio.h>
main()
{
int i,j,k,l;
for(i=-4;i<=4;i++)
{
k=i;
if(k<0)
k=-k;
l=1;
for(j=1;j<=9-k;j++)
{
if(j<=k)
printf("  ");
else
{
printf("%d ",l);
l++;
}
}
printf("\n");
}

}
