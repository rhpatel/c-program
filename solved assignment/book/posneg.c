#include<stdio.h>
main()
{
int i,j;
//////using conditional execution////
printf("Enter the number\n");
scanf("%d",&i);
/*
i<0?printf("negative"):printf("positive");

///using decision control statement///

if(i<0)
printf("Negative number\n");
else
printf("positive number\n");
*/
//////using biwise operator///
j=i>>31&1;
printf("%d",j);
if(j==1)
printf("Negative number\n");
else
printf("positive number\n");
}
