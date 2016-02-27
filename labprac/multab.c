#include<stdio.h>
main()
{
int i,j=1;
printf("Enter the number");
scanf("%d",&i);
abc:
printf("%d * %d= %d\n",i,j,i*j);
j++;
if(j<=10)
goto abc;

}
