#include<stdio.h>
main()
{
int num,bin,pos=31;
printf("Enter the number...\n");
scanf("%d",&num);
abc:
bin=num>>pos&1;
printf("%d",bin);
if(pos%8==0)
printf(" ");
pos--;
if(pos>=0)
goto abc;
printf("\n");
}











