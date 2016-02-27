#include<stdio.h>
int fact(int);
main()
{
int i,num,sum;
printf("Enter the number...\n");
scanf("%d",&num);
sum=fact(num);

printf("Factorial of a number is=%d\n",sum);
}
int fact(int n)
{
if(n>1)
 return(n*fact(n-1));
else 
return 1;
}



