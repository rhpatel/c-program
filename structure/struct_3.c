#include<stdio.h>
typedef struct A
{
char i:3;
char j:6;
}B;

main()
{
B a1;
a1.i=7;


printf("%d",sizeof(a1));
}




