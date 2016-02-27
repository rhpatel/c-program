
#include<stdio.h>
main()
{
int i,j,k,l;
for(i=-4;i<=4;i++)

{l=i;
if(l<0)
l=-l;

for(j=-4;j<=4;j++)
{
k=j;
if(k<0)
  k=-k;
if(k==l)
printf("*");
else
printf(" ");
}
printf("\n");
}
}
