#include<stdio.h>
main()
{

int a[]={0,12,12,11,15,12,2,0,4,5},max,temp,ele,i,ele1;

ele=sizeof(a)/sizeof(a[0]);
max=a[0];
for(i=1;i<ele;i++)
{
if(max<a[i])
max=a[i];
}

int b[max+1];
ele1=sizeof(b)/sizeof(b[0]);
for(i=0;i<=ele1;i++)
b[i]=0;



for(i=0;i<ele;i++)
{temp=a[i];
b[temp]++;
} 

for(i=0;i<=ele1;i++)
if(b[i]==1)
printf("%d \n",i);


}



