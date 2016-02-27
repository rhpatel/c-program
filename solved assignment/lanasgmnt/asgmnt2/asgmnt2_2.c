#include<stdio.h>
main()
{
int i,num,sum=0;
printf("Enter the number");
scanf("%d",&num);

abc:
	sum=sum+(num%10);
	num=num/10;
		if(num>10)
		goto abc;
sum=sum+num;
printf("%d\n",sum);

}
