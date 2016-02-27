#include<stdio.h>
static int sum=0;
int op(int,int);
main()
{
int num,i=1,total;
printf("Enter the number\n");
scanf("%d",&num);
total=op(num,i);
if(total==num)
printf("perfect num=%d\n",total);
else
printf("number %d is not perfect\n",num); 
}

int op(int n,int i)
{
if(i<n)
{
if(n%i==0)
{sum=sum+i;
//printf("%d\t",i);  
}
return(op(n,i+1));
}

else 
return sum;
}



