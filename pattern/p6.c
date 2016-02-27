#include<stdio.h>
main()
{
int i,j,num;
printf("Enter the number\n");
scanf("%d",&num);
for(i=num;i>0;i--)
{
for(j=i;j>0;j--)
printf("%d",j);

printf("\n");
}
}
