/*
 recursive function to that displays all the proper divisors of a given number
	 exept that and returns their sum.
	 Ex: 1,3,5,9,15 & 45 are the proper divisors of 45.
	        sum = 1+3+5+9+15
		      = 33
*/

#include<stdio.h>
int static sum=0,i=1;
int fun(int);
main()
{
int num,op;
printf("Enter the number\n");
scanf("%d",&num);
op=fun(num);

printf("Total=%d",op);
}

int fun(int num)
{
  if(i<num)
    { 
     if(num%i==0)
       {
        printf("%d ",i);
         sum=sum+i;
        }
        i++;
        fun(num);
       
      }
    else
     return sum;
 }

