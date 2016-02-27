// Write a recursive function to print the 'n'  fibonacci series numbers.

#include<stdio.h>
static int n=2;
void fibo(int, int);

main()
{
int first=0,second=1;
printf("%d\t%d\t",first,second);
fibo(first,second);
}

void fibo(int first,int second)
{
int next;
if(n<10)
{ next=first+second;
  printf("%d\t",next);
   n++;
  fibo(second,next);
}
else
return;
}





