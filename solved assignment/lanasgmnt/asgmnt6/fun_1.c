// Write a recursive function to find the factorial of a given number..

#include<stdio.h>
int fact(int);
main()
{
int n,op;
printf("Enter the number..\n");
scanf("%d",&n);
op=fact(n);
printf("factorial =%d\n",op);
}
int fact(int n)
{
if(n<=1) 
   return 1;
else
   return(n * fact(n-1));
}






