#include<stdio.h>
main()
{
int a[20],i,j,k,sum=0,ele;
int p=0; 
//printf("Enter the value of n\n");
scanf("%d",&p);
//k=n;
//printf("%d\n",n);
ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<=ele;i++)
a[i]=i*i;
//printf("sum=%d\n",sum);

for(i=0;i<p;i++)
{
printf("Sum=%d\n",sum=sum+a[i]);
}
}
