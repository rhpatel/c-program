#include<stdio.h>
#include<math.h>

main()
{
int a,b;
char op;
printf("Enter two number\n");
scanf("%d%d",&a,&b);

printf("Enter\n 1)+ \n2)- \n3)*\n4)/\n");
scanf(" %c",&op);

switch(op)
{
case'+' :
printf("sum=%d",a+b);
break;
case'-':
printf("diff=%d",a-b);
break;
case'*':
printf("mul=%d",a*b);
break;
case'/':
printf("div=%d",a/b);
break;
default: 
printf("Enter proper choice");
}}

