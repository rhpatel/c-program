// recursive function to find the sum of digits of a given number.

#include<stdio.h>
static int sum=0;
int fun(int);
main()
{

int num,total;
printf("Enter the number\n");
scanf("%d",&num);
total=fun(num);
printf("Total=%d\n",total);
}
int fun(int n)
{
if(n)
{  
 sum=sum+n%10;
  fun(n/10);
}
else
return sum;
} 
 




