#include<stdio.h>
#define op 2
#if (op==1)

main()
{
int num=5,i,fact=1;
for(i=1;i<num;i++)
  fact=fact*i;
printf("Factorial =%d",fact);
}
#else
main()
{
int num=11,i;
for(i=2;i<num;i++)
{
 if(num%i==0)
     break;
}
 if(num==i)

printf("%d is prime",num);
}
#endif

