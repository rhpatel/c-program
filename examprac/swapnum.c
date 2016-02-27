#include<stdio.h>
main()
{
int a,b,temp;
printf("Enter two  numbers...\n");
scanf("%d%d",&a,&b);

printf("Before swapping\n");
printf("a=%d b=%d\n",a,b);

//with temp
/*
temp=a;
a=b;
b=temp;
*/
/*
// without temp

//b=a+b-(a=b);
b=a*b/(a=b);
*/

/// Bit wise
a=a^b;
b=a^b;
a=a^b;




printf("After swapping\n");
printf("a=%d b=%d\n",a,b);
}
