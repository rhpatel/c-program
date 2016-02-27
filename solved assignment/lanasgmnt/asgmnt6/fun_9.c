/* number is perfect if the sum of all its positive proper divisors is equal to the
           number. For example 28 is a perfect number since 28 = 1+2+4+14. Write a 
           recursive function that finds whether a number is perfect or not.i
*/

#include<stdio.h>
static sum=0;
int per(int);
main()
{
int num,op;
printf("Enter the number..\n");
scanf("%d",&num);

op=per(num);

if(op==num)
printf("Number is perfect\n");
else
printf("Number is not perfect...");
}

int per(int n)
{
  static int i=1;
   if(i<n)
      {  
         if(n%i==0)
           sum=sum+i;
        i++;
        return(per(n));
      }
   else
      return sum;
}





