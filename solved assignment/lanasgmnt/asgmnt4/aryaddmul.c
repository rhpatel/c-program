#include<stdio.h>
main()
{

int a[10],i,j,sum=0,mul=1,ele;

ele=sizeof(a)/sizeof(a[0]);
printf("Enter the array\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);


for(i=0;i<ele;i++)
if(i%2)
mul=mul*a[i];
else
sum=sum+a[i];


printf("sum=%d,mul=%d",sum,mul);
}
