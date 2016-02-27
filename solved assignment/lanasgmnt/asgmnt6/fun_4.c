// recursive function to revese the given number.

#include<stdio.h>
static int sum=0;
void rev(int);
main()
{
int num;
printf("Enter the number....\n");
scanf("%d",&num);
rev(num);
printf("sum=%d\n",sum);
}
void rev(int n)
{
if(n)
{
sum=sum*10+n%10;
    rev(n/10);
}
else
return;
}






