//Write a recursive function to find the largest element in a given Unsorted array.
#include<stdio.h>
static int m=0;
int max(int *,int);
main()
{
int a[5]={1,15,22,5,7},m;
m=max(a,5);
printf("maximum=%d",m);
}

int max(int *p,int n)
{
if(n)
{
  if(m<*p)
    m=*p;
  return(max(p+1,--n));
}
else
return m;
}







