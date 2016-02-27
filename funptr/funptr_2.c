// Array of function pointer...............


#include<stdio.h>

int (*p[3])(int,int);
int sum(int,int);
int sub(int,int);
int mul(int,int);

main()
{

int m=10,n=20,i;
p[0]=sum;
p[1]=sub;
p[2]=mul;

for(i=0;i<3;i++)
printf("%d\n",(*p[i])(m,n));
}

int sum(int i,int j)
{
return(i+j);
}


int sub(int i,int j)
{
return(i-j);
}


int mul(int i,int j)
{
return(i*j);
}














