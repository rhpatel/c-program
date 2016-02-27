//7) Write a recursive function to print first 100 prime numbers.

#include<stdio.h>
static int c=0;
void prime(int);
main()
{
prime(1);
}

void prime(int num)
{int j;
if(c<20)
{
  for(j=2;j<num;j++)
      if(num%j==0)
         break;
          if(num==j)
           {
            c++;
            printf("%d ",num);
           }
 prime(num+1);
 }    
else
return;
}


