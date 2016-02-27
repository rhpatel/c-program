#include<stdio.h>
main()
{
int num;
printf("Enter number\n");
scanf("%d",&num);
num>>31&1?printf("negative"):printf("positive");
}
