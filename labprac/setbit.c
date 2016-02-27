#include<stdio.h>
main()
{
int i,j,k;
printf("Enter the number and position\n");
scanf("%d%d",&i,&j);
printf("number=%d,position=%d\n",i,j);
k=i&1<<j;
k?printf("set\n"):printf("clear\n");







}
