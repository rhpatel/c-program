#include<stdio.h>
main()
{
int sum=0,r,num;
printf("Enter the number");
scanf("%d",&num);

for(;num;num=num/10)
//sum=sum*10+num%10; //for reverse
sum=sum+num%10;

printf("%d",sum);



}
