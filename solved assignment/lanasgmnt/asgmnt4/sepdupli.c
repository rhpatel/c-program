#include<stdio.h>
main()
{

int a[]={0,1,2,1,5,3,2,0,4,5},max,temp,ele,i,ele1,c[10],d[10];
int m=0,n=0;
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


for(i=0;i<ele1;i++)
printf("%d is times %d \n ",i,b[i]);

temp=0;

for(i=0;i<ele1;i++)
{
temp=b[i];
if(temp==1)
c[m++]=i;
else if(temp>1)
{
c[m++]=i;
d[n++]=i;

}
}
printf("\n");
for(i=0;i<m;i++)
printf("%d ",c[i]);
printf("\n");
for(i=0;i<n;i++)
printf("%d ",d[i]);
printf("\n");


}







