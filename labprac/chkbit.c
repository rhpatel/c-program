#include<stdio.h>
main()
{
int i,j,k;
printf("Enter the number and position\n");
scanf("%d%d",&i,&j);
printf("number=%d,position=%d\n",i,j);
//i=i&~(1<<j);
//i=i|1<<j;
i=i^1<<j;
printf("After set or clear num=%d\n",i);







}
