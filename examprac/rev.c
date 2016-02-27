#include<stdio.h>
main()
{
int num,rem;

printf("enter the number...\n");
scanf("%d",&num);
rem=0;
abc:
rem=(rem+(num%10))*10;

num=num/10;
if(num>10)
goto abc;
rem=rem+num;
printf("%d",rem);
}
