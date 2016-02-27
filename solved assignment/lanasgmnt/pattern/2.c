#include<stdio.h>
main()
{
int i,j,k;
for(i=-6;i<=6;i++)
{
k=i;
if(k<0)
k=-k;
for(j=1;j<=13-k;j++)
{
if(j<=k)
printf(" ");
else
printf("*");
}
printf("\n");

}
}
