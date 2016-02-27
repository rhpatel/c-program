#include<stdio.h>
int fact(int);
main()
{
int n,facto;
printf("Enter the number\n");
scanf("%d",&n);

facto=fact(n);
printf("Factorial = %d\n",facto);
}

int fact(int n)
{
if(n>1)
return(n*fact(n-1));
else 
return 1;

}

