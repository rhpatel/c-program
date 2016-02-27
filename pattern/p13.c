#include<stdio.h>
main()
{
int i,k,j,num;
printf("Enter the number\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(i%2==1)
k=1;
else
k=2;
for(j=1;j<=i;k=k+2,j++)
printf("%d",k);
printf("\n");
}
}
