#include<stdio.h>
main()
{
int num,i,c=0,j;
printf("Enter the num..\n");
scanf("%d",&num);



//num&num-1?printf("not power of two"):printf("power of two");

for(i=31;i>=0;i--)
{
j=num>>i&1;
if(j==1)
c++;
}

c==1?printf("power of two"):printf("Not power of two");
}
