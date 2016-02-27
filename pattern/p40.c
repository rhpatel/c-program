#include<stdio.h>
main()
{
int i,j,k,num;
char ch='A',l;
printf("Enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
l=ch+i-1;
printf("%c",ch+i-1);
for(j=1,k=num-1;j<i;j++,k--)
 {   
  l=l+k;
  printf("%c",l);
 }
  printf("\n");
 }
 }
