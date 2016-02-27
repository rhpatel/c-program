#include<stdio.h>
main()
{
int num,pow,r,c=0,pos,i;
printf("Enter the number");
scanf("%d",&num);


//GENERIC////////

printf("Enter the power");
scanf("%d",&pow);
for(;num>pow;)
{r=num%pow;
num=num/pow;
}
if(r==0)
printf("Power");
else
printf("not");
/*
for(pos=31;pos>=0;pos--)
{i=num>>pos&1;
if(i==1)
c++;
}
if(c==1)
printf("Power of 2");
else
printf("No power of 2");
*/
}
