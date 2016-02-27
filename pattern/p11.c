#include<stdio.h>
main()
{
int i,j,num;
printf("Enter the number\n");
scanf("%d",&num);
for(i=num;i>=1;i--)
{
for(j=num;j>=i;j--)
printf("%d",j);

printf("\n");
}
}
