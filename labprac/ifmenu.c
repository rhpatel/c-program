#include<stdio.h>
main()
{
int num,pos,i,c=0;

printf("Enter the number....\n");
scanf("%d",&num);
abc:
printf("enter the position....\n");
scanf("%d",&pos);

if (pos>=0 && pos<=31)
	{
	printf("Enter the number....\n1)setbit\n2)clear bit\n3)comp bit\n");
	scanf("%d",&i);
		if(i==1)
		{
		num=num|1<<pos;
		printf("New Number=%d\n",num);
		}

		else if(i==2)
		{
		num=num&~(1<<pos);
		printf("New Number=%d\n",num);
		}

	
		else if(i==3)
		{	
		num=num^1<<pos;
		printf("New Number=%d\n",num);
		}

	else 
	printf("Enter proper Choice\n");
	}

else
   {	printf("Enter proper position\n");
 c++;
if(c<=2)
goto abc;
   }
 
}
