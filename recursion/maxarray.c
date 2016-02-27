#include<stdio.h>
static int *q;
int max(int *p);
main()
{
 int a[5]={5,9,11,73,7},maxim;
   q=a+4;
  maxim=max(a);

printf("max num is=%d",maxim);
}

int max(int *p)
{
static m=0;
if(p<q)
{  if(m<*p)
     m=*p;
   return(max(p+1));
} 
else
return m;
}



