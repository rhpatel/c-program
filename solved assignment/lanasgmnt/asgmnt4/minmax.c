#include<stdio.h>
main()
{

int a[10],i,j,ele,max,min;
ele=sizeof(a)/sizeof(a[0]);

printf("Enter the array\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

max=a[0];
min=a[0];
for(i=1;i<ele;i++)
if(max<a[i])
max=a[i];

for(i=1;i<ele;i++)
if(min>a[i])
min=a[i];

printf("Max=%d, min=%d",max,min);
}


