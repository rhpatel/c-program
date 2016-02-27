#include<stdio.h>
main()
{
int a,b;
printf("Enter the two number\n");
scanf("%d%d",&a,&b);

printf("Before swaping a=%d and b=%d\n",a,b);
a=a^b;
b=a^b;
a=a^b;

printf("After swaping a=%d and b=%d\n",a,b);
}
