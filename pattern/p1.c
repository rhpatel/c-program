#include<stdio.h>
main()
{
int i,j,k,num;
printf("Enter the number\n");
scanf("%d",&num);
for(i=0;i<num;i++)
{ 
for(j=num;j>i;j--)
printf(" ");
for(k=i;k<=i;k++)
printf("* ");
printf("\n");
}


}
