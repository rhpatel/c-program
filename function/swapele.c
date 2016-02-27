#include<stdio.h>
void swapele(int *,int);
main()
{
int a[]={1,2,3,4,5,6},ele,i;
ele=sizeof(a)/sizeof(a[0]);
 
swapele(a,ele);
for(i=0;i<ele;i++)
printf("%d ",a[i]);
}

void swapele(int *p, int s)
{

int *q,temp;
q=p+s-1;
/*
for(;p<q;p++,q--)
{temp=*p;
*p=*q;
*q=temp;
*/

while(p<q)
{
temp=*p;
*p=*q;
*q=temp;
p++;
q--;
}
}


