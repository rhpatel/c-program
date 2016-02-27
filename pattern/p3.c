#include<stdio.h>
main()
{
int i,j,num;
printf("Enter the num...\n");
scanf("%d",&num);
for(i=num;i>0;i--)
{
for(j=1;j<=i;j++)
printf("%d",j);
printf("\n");
}


}
