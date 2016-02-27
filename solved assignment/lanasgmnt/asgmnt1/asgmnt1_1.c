#include<stdio.h>
main()
{
int num,pos,setbit,clrbit,togbit;
printf("enter the number and position\n");
scanf("%d%d",&num,&pos);
// to set bit

setbit=num|(1<<pos);
printf("After set bit num=%d\n",setbit);

// to clear bit

clrbit=num&~(1<<pos);
printf("After clear bit num=%d\n",clrbit);

// to toggle bit
togbit=num^(1<<pos);

printf("After toggling bit num=%d\n",togbit);
}
