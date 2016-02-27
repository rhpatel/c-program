#include<stdio.h>
main()
{
int num,bit,i;
printf("Enter the num nd bit...\n");
scanf("%d%d",&num,&bit);
printf("Before comp\n%d\n",num>>bit&1);

i=num>>bit^1;

printf("After comp\n%d\n",i);
}
