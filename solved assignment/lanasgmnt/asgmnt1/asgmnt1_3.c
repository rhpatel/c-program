#include<stdio.h>
main()

{
int a,b,c;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);

printf("Before Swapping a=%d b=%d\n",a,b);

/*
//using Temp variable
c=a;
a=b;
b=c;
*/

//without Temp
//b=a*b/(a=b);
//b=a+b-(a=b);

a=a^b;
b=a^b;
a=a^b;


printf("After Swapping a=%d b=%d\n",a,b);



}
