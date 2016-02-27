#include<stdio.h>
main()
{
short int i=360,j=3,k,l;


printf("before i=%hd,j=%hd,k=%hd,l=%hd\n",i,j,k);

k=i<<1;
l=i<<17;

printf("After i=%hd,j=%hd,k=%hd,l=%hd\n",i,j,k,l);
}
