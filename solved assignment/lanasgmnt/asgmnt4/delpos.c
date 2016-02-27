#include<stdio.h>
main()
{
int a[10],i,j,ele,temp,pos;
ele=sizeof(a)/sizeof(a[0]);

printf("Enter the array\n");

for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("Enter the position\n");
scanf("%d",&pos);

for(i=0;i<ele;i++)
printf("%d",a[i]);


for(i=pos-1;i<ele;i++)
a[i]=a[i+1];

a[i-1]=0;
//printf("\ni=%d\n",i);

printf("\n");
for(i=0;i<ele-1;i++)
printf("%d",a[i]);


}
