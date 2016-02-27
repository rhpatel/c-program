#include<stdio.h>
main()
{
int i,num1,num2,num;
printf("Enter the number...\n");
scanf("%x",&i);

num1=(i&0x00ff)<<8;
num2=(i&0xff00)>>8;
num=num1|num2;

printf("%p",num);



}
