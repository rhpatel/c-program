#include<stdio.h>
void prntary(int *,int);
main()
{
int a[5]={1,3,5,7,9},ele;
ele=sizeof(a)/sizeof(a[0]);

prntary(a,ele);
}


void prntary(int *p,int s)
{
int i;

for(i=0;i<s;i++)
printf("%d ",*p++);
}




