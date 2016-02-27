#include<stdio.h>
void revbin(int *);
main()
{
int n,op,k;
printf("Ente the number...\n");
scanf("%d",&n);

revbit(&n);

for(k=31;k>=0;k--)
printf("%d",n>>k&1);
}



void revbit(int *p)
{

static int i=31,j=0;
//printf("%d",*p);
  int num1,num2;
 if(i>j)
   { 
     num1=*p>>i&1;
     num2=*p>>j&1;
    if (num1!=num2)
    {
    	*p=*p^1<<i;
     	*p=*p^1<<j;
     }
     	i--;
     	j++;
    	revbit(p);
     }
}








