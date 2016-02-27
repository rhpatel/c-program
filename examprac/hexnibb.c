#include<stdio.h>
main()
{
unsigned char c,num1,num2,num;
printf("Enter the number");
scanf("%x",&c);

num1=c<<4|c>>4;

printf("%p",num1);


}
