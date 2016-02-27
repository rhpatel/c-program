#include<stdio.h>
main()
{
int i,j,k;
for(i=1;i<=5;i++)
{
for(j=-4;j<=4;j++)
{
	k=j;
	if(k<0)
k=-k;
if(i>=5-k)
printf("%d",5-k);
else
printf(" ");
}
printf("\n");
}


}
