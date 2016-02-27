#include<stdio.h>
main()
{
int i,j,k;
char ch;
for(i=1;i<=7;i++)
{
ch='G';
for(j=-6;j<=6;j++)
{k=j;
if(k<0)
k=-k;
if(i<=k+1)
printf("%c",ch-k);
else
printf(" ");
}

printf("\n");
}
}
