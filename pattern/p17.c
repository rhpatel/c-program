#include<stdio.h>
main()
{
int i,j,k,num,l=1;
printf("Enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
for(j=2*(num-i);j>=1;j--)
printf(" ");
for(k=1;k<=2*i-1;k++,l++)
printf(" %d",l);
printf("\n");

}
int m=102;
printf("\n%2d",m);


}
