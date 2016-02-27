#include<stdio.h>
main()
{

unsigned int i,j,k,l;

i=2147483659;
j= i>>3;
printf("j=%u\n",j);
k=i<<(29);
printf("k=%u\n",k);

l=j|k;
printf("%u",l);
}
