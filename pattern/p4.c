#include<stdio.h>
main()
{
int i,j,num;
printf("Enter the num\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
for(j=i;j<=num;j++)
printf("%d",j);
printf("\n");
}


}
