// sum....

#include<stdio.h>
#include<stdarg.h>
int sum(int,...);
main()
{
int i=10,j=20,k=30,op;
op=sum(3,i,j,k);
printf("sum=%d\n",op);
}

int sum(int n,...)
{
int sum=0,i,num;
va_list v;
 va_start(v,n);
for(i=0;i<n;i++)
{
sum=sum+va_arg(v,int);
}
return sum;
}














