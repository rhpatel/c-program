#include<stdio.h>
main()
{

float f=3.5;
int *p,i;

p=&f;

for(i=31;i>=0;i--)
printf("%d",(*p)>>i&1);
}

