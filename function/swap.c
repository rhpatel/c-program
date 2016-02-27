#include<stdio.h>

void swap(int *,int *);
main()
{
int a=3,b=4;
swap(&a,&b);
printf("a=%d,b=%d",a,b);
}


void swap(int *p,int *q)
{
int temp;

temp=*p;
*p=*q;
*q=temp;
}
