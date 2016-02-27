#include<stdio.h>
main()
{
int a,b;
printf("Enter the two numbers\n");
scanf("%d%d",&a,&b);
/*/////////////Using Bitwise/////////// 
printf("Before Swapping\na=%d b=%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("After Swapping\na=%d b=%d\n",a,b);
*///using Without Temp
printf("Before Swapping\na=%d b=%d",a,b);
//b=a+b-(a=b);
b=a*b/(a=b);
printf("After Swapping\na=%d b=%d\n",a,b);

}
