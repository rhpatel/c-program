#include<stdio.h>
main()
{
int i,j,num;
printf("Enter the number...\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
for(j=1;j<=i;j++)
printf("%d",j%2);

printf("\n");
}


}
