#include<stdio.h>
main()
{int fact=1,i,num;
printf("enter the number...\n");
scanf("%d",&num);

//for(i=1;i<=num;i++)
//fact=fact*i;
//for( ;num;num--)
//fact=fact*num;

for(i=num;i>=1;i--)
fact=fact*i;

printf("factorial=%d\n",fact);

}
