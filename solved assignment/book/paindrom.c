#include<stdio.h>
main()
{
int r,sum,num,i;
for(i=1;i<=500;i++)
{
num=i;
sum=0;

	for(;num;num=num/10)
               { sum=sum*10+num%10;}

		if(i==sum)
                printf("%d\t",sum);

}
}
