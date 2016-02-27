#include<stdio.h>
main()
{
int num,num1,num2,q1,q2;
printf("Enter the number\n");
scanf("%d",&num);

num1=num/10; // 34
//printf("34 %d\n",num1);

q1=(num%10)*10;
//printf("50 %d\n",q1);
num2=num1/10;
//printf("3 %d\n",num2);

q2=((q1+(num1%10))*10)+num2;
printf("final num=%d\n",q2);




}
