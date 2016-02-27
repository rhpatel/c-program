#include<stdio.h>
main()
{
int i,num,c,k=0;

for(num=2;k<=100;num++)
{
c=0;
for(i=2;i<num;i++)
{if(num%i==0)
 c++;
}

if(c==0)
{printf("%d\n",num);
k++;
}
}}
