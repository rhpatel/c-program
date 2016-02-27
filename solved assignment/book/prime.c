#include<stdio.h>
main()
{
int i,j,r,num,c=0;
for(i=3;i<=300;i++)
{
c=0;
num=i;
for(j=2;j<num;j++)
{if(num%j==0)
c++;}

if(c==0)
printf("%d\t",num);
}




}
