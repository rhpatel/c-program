#include<stdio.h>
main()
{
int num,k,j;
printf("enter the number\n");
scanf("%d",&num);
j=2;
abc:
  k=num/j;

  if(num%j!=0)
  {
  j++; 
 goto abc;
   }
if(j==num)
printf("Prime\n");
else
printf("not prime\n");
}
