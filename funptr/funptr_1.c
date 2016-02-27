//function pointer....

#include<stdio.h>

int (*p)(int,int);

int call(int,int,int(*)(int,int));
int sum(int,int);

main()
{
int i=10,j=20,op;

/*
p=sum;
op=(*p)(i,j);
printf("sum=%d\n",op);
*/

op=call(i,j,sum);                  //call back function...
printf("sum=%d\n",op);

}

int sum(int i,int j)
{
 return(i+j);
}

int call(int i,int j,int(*p)(int,int))
{
 return((*p)(i,j));
}
  




