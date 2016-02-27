#include<stdio.h>
main()
{
int i,j,num=6,sum=0;


for(j=1;j<=1000;j++)
{
num=j;
sum=0;
for(i=1;i<num;i++)
{
if(num%i==0)
sum=sum+i;
}
//printf("%d",sum);

if(num==sum)
printf("number %d is perfect\n",num);
}


}
