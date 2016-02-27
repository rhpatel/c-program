#include<stdio.h>
main()
{
int i,num,sum=0,r;

////////////////////////////////////////check for Armstrong/////////////////////
/*
printf("Enter the number..\n");
scanf("%d",&num);
i=num;
for(;num;num=num/10)
{
r=num%10;
sum=sum+(r*r*r);
}

if(sum==i)
printf("number is Armstrong");

*/
//////////////////////////////////Armstrong between range////////////////////
for(i=1;i<=1000;i++)
{
num=i;
sum=0;
for(;num;num=num/10)
{
r=num%10;
sum=sum+(r*r*r);
}
if(sum==i)
printf("%d\t",i);

}
}
