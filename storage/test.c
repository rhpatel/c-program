#include<stdio.h>
extern int i;
int i=20;
main()
{
//i=20;
printf("i=%d\n",i);
{ 
auto i=10;
printf("Inner i=%d",i);
}
}

