#include<stdio.h>
main()
{
int a[10],i,j,k,ele,max,max1,min,min1;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter the element of an array...\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
max=a[0];
min=a[0];
for(i=0;i<ele;i++)
{
if(max<a[i])
  max=a[i]; 
if(min>a[i])
  min=a[i];
}
min1=max;
max1=0;

for(i=0;i<ele;i++)
{
  if(a[i]==max||a[i]==min)
    continue;

if(max1<a[i])
  max1=a[i]; 
if(min1>a[i])
  min1=a[i];
  }
printf("max=%d max1=%d min=%d min1=%d\n",max,max1,min,min1);
}
