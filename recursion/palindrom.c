#include<stdio.h>
static int sum=0;
int palin(int);
main()
{
int a[5]={11,23,34,44,333},c,i;

for(i=0;i<5;i++)
{
 c=palin(a[i]);
if(c==a[i])
printf("%d\t",a[i]);
}
}

int palin(int a)
{int sum1=0;
 if(a>0)
  {
	sum=(sum*10)+(a%10);
        a=a/10;
        return(palin(a));
  }
 else
   {sum1=sum;
    sum=0;
    return sum1;
   }
}


  


