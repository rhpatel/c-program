#include<stdio.h>
static int sum=0,j=1;
int div(int,int);
main()
{
int num;
printf("Enter the number\n");
scanf("%d",&num);
sum=div(num,j);
printf("sum=%d\n",sum);
} 
int div(int num,int j)
{
if(j<num)
  {  if (num%j==0)
        sum=sum+j;
        div(num,j+1); 

  }
else 
return sum;
}
