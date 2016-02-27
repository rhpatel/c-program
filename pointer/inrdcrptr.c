#include<stdio.h>
main()
{
int i,*p;
char *q;

p=&i;
q=&i;

printf("p=%u\t p+1=%u\n",p,p+1);
printf("q=%u\t q+1=%u\n",q,q+1);



}
