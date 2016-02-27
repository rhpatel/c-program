#include<stdio.h>
main()
{
int i,j,num;
printf("Enter the number\n");
scanf("%d",&num);
for(i=num;i>=1;i=i-2)
{
for(j=1;j<=i;j++)
printf("%d",j);

printf("\n");
}
}
