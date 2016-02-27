#include<stdio.h>
int op(int,int);
main()
{
int num,total,sum=0;
printf("Enter the number...\n");
scanf("%d",&num);
total=op(sum,num);
printf("total=%d\n",total);
}

int op(int s,int n)
{
if(n>0)
 { s=s+n%10;
  n=n/10;
  return(op(s,n));
 }
else
 return s;
}








