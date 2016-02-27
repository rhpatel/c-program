#include<stdio.h>
#include<stdlib.h>
static num=0,ins=0;
typedef struct bank
{
	int accno;
	char name[10];
	float bal;
}B;

void add(B **);
void print(B **);
void printlow(B **);
void modify(B **);
main()
{
	B **s;
	int i,choice;
	s=malloc(sizeof(s)*100);

	for(i=0;i<100;i++)
	{
		s[i]=malloc(sizeof(B));
		//  printf("%u\n",s[i]);

	}

	printf("\n\n");
abc:	printf("Enter the choice\n 1)View account 2)Add account 3)modify account 4)Print low bal acc 5)terminate\n");
	scanf(" %d",&choice);

	switch(choice)
	{
		case 1: print(s);
			break;

		case 2: add(s);
			break;
		case 3: modify(s);
			break;
		case 4:printlow(s);
		       break;
		case 5:  return;

		default:printf("Enter proper choice");

	}
	goto abc;

}
void print(B **s)
{ 
	//printf("ins=%d,s[0]=%u",ins,s[0]);
	int i;
	for(i=0;i<ins;i++)
		printf("Accno= %d\nName=%s \nBalance=%f\n--------------------\n",s[i]->accno,s[i]->name,s[i]->bal);
}
void printlow(B **s)

{ 
	//printf("ins=%d,s[0]=%u",ins,s[0]);
	int i;
	for(i=0;i<ins;i++)
	{if(s[i]->bal<=100)
		printf("Accno= %d\nName=%s \nBalance=%f\n--------------------\n",s[i]->accno,s[i]->name,s[i]->bal);
	}
}

void add(B **s)
{
	//  printf("ins=%d  s[ins]=%u",ins,s[ins]);

	s[ins]->accno=ins;
	s[ins]->bal=0;
	printf("Enter the  name");
	scanf(" %s",s[ins]->name); 
	ins++;
}

void modify(B **s)
{int ch,acc;
	float amount;
	printf("Enter account no\n");
	scanf("%d",&acc);
	if(acc>ins)
	{
		printf("Invalid acc\n");
		return;
	}
	printf("please Enter  1)Deposit 2)Withdraw\n");
	scanf("%d",&ch); 
	printf("Enter the amount\n");
	scanf("%f",&amount);     
	if(ch==1)
		s[acc]->bal=s[acc]->bal+amount;  
	else   
	{ if(s[acc]->bal<amount)
		{
			printf("Invalid withdraw\n");
			return;
		}        
		s[acc]->bal=s[acc]->bal-amount;  
		printf("Updated bal= %f",s[acc]->bal);
	} 
}     




