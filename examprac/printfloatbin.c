#include<stdio.h>
main()
{
int *p,i;
float f=3.5;

p=&f;

for(i=31;i>=0;i--)
printf("%d",(*p)>>i&1);
printf("\n");
}


