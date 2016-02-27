#include<stdio.h>
main()
{
int num,k;
printf("enter the number\n");
scanf("%d",&num);

k=num&1;

k?printf("odd\n"):printf("Even\n");


}
