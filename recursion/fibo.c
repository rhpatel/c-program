#include<stdio.h>
static int count =2,n;
void fibo(int*, int*);
main()
{int p,q;
printf("Enter the count\n");
scanf("%d",&n);
p=0;
q=1;
printf("%d\t%d",p,q);
fibo(&p,&q);
}

void fibo(int *p,int *q)
{
if(count<n)
{int temp;
 temp=*p+*q;
 *p=*q;
*q=temp;
printf("\t%d",temp);
count++;
fibo(p,q);
}
else
return;
}



