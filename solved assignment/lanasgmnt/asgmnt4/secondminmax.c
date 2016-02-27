#include<stdio.h>
main()
{
int a[10],i,ele,max,max1,min,min1;
ele=sizeof(a)/sizeof(a[0]);

printf("Enter the array\n");

for(i=0;i<ele;i++)
scanf("%d",&a[i]);

for(i=0;i<ele;i++)
printf("%d ",a[i]);

max=a[0];
max1=a[0];
//min=a[0];
//min1=a[0];
for(i=1;i<ele;i++)
{
if(max<a[i])
{max1=max;  
max=a[i];
}
else if(max1<a[i])
max1=a[i];
}

printf("max=%d\n max1=%d\n",max,max1);

min=max;
min1=max;

for(i=0;i<ele;i++)
{
if(min>a[i])
{min1=min;  
min=a[i];
}
else if(min1>a[i])
min1=a[i];
}
printf("Min=%d\n min1=%d\n",min,min1);
}




















