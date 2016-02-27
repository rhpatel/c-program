#include<stdio.h>
main()
{
int i,j,k;

printf("Enter the three number\n");
scanf("%d%d%d",&i,&j,&k);

//big out of two

i>j?printf("Big num is=%d",i):printf("Big num is %d",j);

printf("\n");
//big out of three

i>j?i>k?printf("big num is %d",i):printf("big num is %d",k):j>k?printf("big number is=%d",j):printf("big number is %d",k);
printf("\n");
}


