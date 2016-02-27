#include<stdio.h>
main()
{
int r,sum,num,i;
for(i=100;i<=500;i++)
{
num=i;
sum=0;

	for(;num;num=num/10)
               { r=num%10;
        	sum=sum+(r*r*r);}

		if(i==sum)
                printf("%d\t",sum);

}
}
