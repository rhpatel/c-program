#include<stdio.h>
main()
{
int a[20];
int i,j,k,sum=0,ele,p;
//short int p;

//printf("Enter the value of n\n");
scanf("%d",&p);
//k=p;
//p=5;
//printf("%d",p);

ele=sizeof(a)/sizeof(a[0]);

for(i=1;i<ele;i++)
a[i]=i*i;
printf("p=%d\n",p);

for(i=1;i<p;i++)
{
printf("Sum=%d\n",sum=sum+a[i]);
}
}
