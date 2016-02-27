#include<stdio.h>
void prime(int,int);

main()
{
int c=0,num=2;
 prime(num,c);
}


void prime(int n,int c)
{
if(c<10)
{
 int j;
for(j=2;j<=n;j++)
  {
    if(n%j==0)
    break;
  }
if (n==j)
{ 
printf("%d\t",n);
c++;
}
n++;
 prime(n,c);
}
}




