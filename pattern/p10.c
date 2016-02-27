#include<stdio.h>
main()
{
int i,j,num;
printf("Enter the number\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
for(j=i;j>=1;j--)
printf("%d",j);

printf("\n");
}
}
