#include<stdio.h>
void fun(int *,int *);
main()
{
int a[5],ele,temp,i,j;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter the element..\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
/*
for(i=0,j=ele-1;i<j;i++,j--)
  {  
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  }
*/
fun(a,a+ele-1);
for(i=0;i<ele;i++)
printf("%d ",a[i]);
}

void fun(int *p,int *q)
{int temp;
if(p<q)
{ temp=*p;
  *p=*q;
  *q=temp;
   fun(p+1,q-1);
}
}














