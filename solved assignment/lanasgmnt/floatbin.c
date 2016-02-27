#include<stdio.h>
main()
{
int i,*p;
float a=3.5;

p=&a;

for(i=31;i>=0;i--)
printf("%d",(*p)>>i&1);




}
