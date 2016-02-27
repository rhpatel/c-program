#include<stdio.h>
main()
{

int a[5],i,j,k,num,c=0,ele;
printf("Size of array=%d\n",sizeof(a));
ele=sizeof(a)/sizeof(a[0]);

printf("Enter the array\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("number of elements=%d\n",ele);



printf("////////////entered  array is////////////////\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);

for(i=0;i<ele;i++)
{
num=a[i];
for(j=2;j<=num;j++)
{
if(num%j==0)
break;
}
if(num==j)
c++;
}

printf("prime count=%d",c);




}








