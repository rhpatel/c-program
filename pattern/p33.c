#include<stdio.h>
main()
{
int i,j,k;
for(i=1;i<=6;i++)
{
int l=i;
printf("%d ",i);
for(j=1;j<=i-1;j++)
{
l=l+i;
printf("%d ",l);
}
printf("\n");
}

}
