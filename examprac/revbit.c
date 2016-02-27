#include<stdio.h>
main()
{
int num,i,j;
printf("Enter the number");
scanf("%d",&num);

printf("\\\\\\\\\\\\\\\\Befor reverse\\\\\\\\\\\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
int num1,num2;
for(i=31,j=0;i>j;i--,j++)
{
num1=num>>i&1;
num2=num>>j&1;
if(num1!=num2)
{num=num^1<<i;
num=num^1<<j;
}
}

printf("\\\\\\\\\\\\\\\\After reverse\\\\\\\\\\\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
}

