#include<stdio.h>
main()
{
int num,pos,i;
printf("Enter the number and position...\n");
scanf("%d%d",&num,&pos);

num>>pos&1?printf("set bit"):printf("clear bit");

printf("Enter 1)for set bit\n2)for clear bit\n3)for Complement bit\n");
int s;
scanf("%d",&s);
switch(s)
{
case 1: printf("%d\n",num=num|1<<pos);
break;
case 2: printf("%d\n",num=num& ~(1<<pos));
break;
case 3: printf("%d\n",num=num^1<<pos);
break;
default: printf("Enter proper choice");
}}
