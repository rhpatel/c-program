#include<stdio.h>
main()
{
int num,k;


printf("Enter the number\n");
scanf("%d",&num);

k=(num>>31)&1;

k?printf("Negative\n"):printf("Positive\n");









}
