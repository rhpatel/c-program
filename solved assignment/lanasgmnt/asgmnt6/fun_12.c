// recursive function to revese the elements of a given array.

#include<stdio.h>
void ary(int*,int*);
main()
{

int a[5]={1,2,3,4,5},i;

printf("Before reverse\n");
for(i=0;i<5;i++)
printf("%d ",a[i]);

ary(a,a+4);

printf("After reverse\n");
for(i=0;i<5;i++)
printf("%d ",a[i]);
}
void ary(int *p,int *q)
{
  int temp;
   if(p<q)
    {
     temp=*p;
     *p=*q;
     *q=temp;
     
     ary(p+1,q-1);
    }
} 
    


