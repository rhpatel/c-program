#include<stdio.h>
main()
{
int num;
printf("Enter the number...\n");
scanf("%d",&num);

num=num&7;
num?printf("not divisible"):printf("Divisible");
}

