#include<stdio.h>
main()
{
int a[6],size,i,ele;
size=sizeof(a)/sizeof(a[0]);
printf("Enter the array...\n");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("Ente the element...\n");
scanf("%d",&ele);
ele=ele-1;

for(i=ele;i<size;i++)
   a[i]=a[i+1];

size=size-1;

for(i=0;i<size;i++)
printf("%d ",a[i]);
}








