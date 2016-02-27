#include<stdio.h>
main()
{
int a[10],b[10],i,ele,c=0,j=0,num,k=0;
ele=sizeof(a)/sizeof(a[0]);

printf("Enter the array\n");

for(i=0;i<ele;i++)
scanf("%d",&a[i]);

for(i=0;i<ele;i++)
printf("%d ",a[i]);


for(i=0;i<ele;i++)
{
num=a[i];
//printf("%d ",num);

for(j=2;j<=num;j++)
if(num%j==0)
break;

if(num==j)
{
 c++;
b[k]=num;
k++;
}
}
//printf("num=%d\nj=%d\n",num,j);
printf("c=%d\n",c);


for(i=0;i<c;i++)
printf("%d ",b[i]);

}







