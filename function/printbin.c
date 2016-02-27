#include<stdio.h>
int binprnt(int);
main()
{ int num,c;
printf("Enter the number\n");
scanf("%d",&num);
c=binprnt(num);
printf("\n");
if(c==1)
printf("power of 2");
else
printf("Not");
}

int binprnt(int a)
{
int i,c=0;
for(i=31;i>=0;i--)
if(a>>i&1)
{printf("1");
c++;
}
else
printf("0");

return c;
}


