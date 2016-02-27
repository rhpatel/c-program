#include<stdio.h>
main()
{
int i,j,temp;
printf("Enter two number....\n");
scanf("%d%d",&i,&j);
printf("Before Swapping i=%d , J=%d\n",i,j);
/*
temp=i;
i=j;
j=temp;
*/



//j=i+j-(i=j);
j=i*j/(i=j);
printf("After Swaping i=%d,j=%d\n",i,j);

}
