#include<stdio.h>

main()
{
int a[]={1,2,3,1,2,3,4,4,4,5},i,j,max,ele,size;
int c[100]={0};
ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
   c[a[i]]++;

for(i=0;i<100;i++)
  if(c[i]>=1)
    printf("%d is %d times\n",i,c[i]);
}






