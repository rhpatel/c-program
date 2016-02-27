#include<stdio.h>
main()
{
int num,pow,i,ans=1;
printf("Enter the number and power...\n");
scanf("%d%d",&num,&pow);

for(i=1;i<=pow;i++)
ans=ans*num;

printf("%d's power %d is=%d\n",num,pow,ans);
}
