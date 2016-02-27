#include<stdio.h>
main()
{
int sum=0,num,r;
printf("Enter the number");
scanf("%d",&num);


////////////////////////////////sum  & Reverse of digit//////////////////

for(;num;num=num/10)
//sum=sum+num%10;//sum
sum=sum*10+num%10;//reverse

printf("%d\n",sum);
}


