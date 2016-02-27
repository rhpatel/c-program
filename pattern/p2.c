#include<stdio.h>
main()
{
int i,j,k,num;
printf("Enter the number....\n");
scanf("%d",&num);
for(i=0;i<num;i++)
{
for(j=0;j<i;j++)
printf(" ");
for(k=num;k>i;k--)
printf("* ");
printf("\n");
}



}
