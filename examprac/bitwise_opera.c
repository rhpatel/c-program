#include<stdio.h>
main()
{
int i,j,k,num,s,pos;

printf("Enter the number");
scanf("%d",&num);

for(i=31;i>=0;i--)
printf("%d",num>>i&1);

printf("\n");

printf("Enter \n1) set bit \n2) clear bit \n3) complement bit\n");
scanf("%d",&s);
printf("Enter the position\n");
scanf("%d",&pos);

switch(s)
{
case 1:
num=num|1<<pos;
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
break;
case 2:
num=num&~(1<<pos);
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
break;
case 3:
num=num^1<<pos;
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
break;
}
}
