#include<stdio.h>
main()
{
int i,j,k;
for(i=-5;i<=5;i++)
{
k=i;
if(k<0)
k=-k;
for(j=1;j<=6;j++)
{
if(j<=5-k)
printf(" ");
else
printf("* ");
}
printf("\n");
}

}
