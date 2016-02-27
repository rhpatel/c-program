#include<stdio.h>
#include<stdlib.h>
main(int argc,char** argv)
{
int i,j,sum=0;
char s[10],*p ;
p=argv[1];


for(i=0;p[i];i++)
sum=sum*10+(p[i]-48);

printf("%d ",sum);
}


