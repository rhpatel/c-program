// recursive function to print the palindrome numbers in a given numbers.

#include<stdio.h>
static sum=0;
int palin(int);

main()
{
int a[5]={11,12,33,44,46},i,n;

for(i=0;i<5;i++)
{
n=palin(a[i]);
if(n==a[i])
printf("%d ",a[i]);
}
}

int palin(int n)
{int sum1=0;
  if(n)
   {sum=sum*10+n%10;
   return(palin(n/10));
   }
 else
  {sum1=sum;
   sum=0;
   return(sum1);
  }
}
     
    
    




