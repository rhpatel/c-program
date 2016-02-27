#include<stdio.h>
main()
{

unsigned char i,num1,num2,num=0x2f;
printf("Enter the number.....(In Hex).\n");
scanf("%x",&num);
printf("%p",(num&0x0f)<<4|(num&0xf0)>>4);

}
