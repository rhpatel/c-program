#include<stdio.h>
main()
{
int num,num1,i,num2;
printf("Enter the number...\n");
scanf("%d",&num);
num1=~num;
printf("1's Comp\n");
for(i=31;i>=0;i--)
printf("%d",num1>>i&1);
printf("\n");
printf("Decimal=%d hexa=%x octa=%o\n",num1,num1,num1);

printf("2's Comp\n");
for(i=31;i>=0;i--)
num2=(~num)+1;
for(i=31;i>=0;i--)
printf("%d",num2>>i&1);
printf("\n");
printf("Decimal=%d hexa=%x octa=%o",num2,num2,num2);
}

