#include<stdio.h>
void abc1(void);
static int i;
main()
{

//static int i=50;
scanf("%d",&i);
printf("%d",i);
abc1();
}

void abc1(void)
{
int i=100;
printf("%d",i);
}


