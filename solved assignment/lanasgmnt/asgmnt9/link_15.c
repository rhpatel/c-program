//15) Write a Singly linked list program to implement Stack and Queue operations.

#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int value;
	struct stack *next;
}ST;

ST *headptr=0;
void print(void);
void push(int);
int pop(void);
static int t=-1;

main()
{


	int c,n,x;

	while(1)
	{

		printf("Enter the choice \n1)push\n2)pop\n3)view stack\n4)exit\n");
		scanf("%d",&n);
		if(n==1)
		{
			printf("Enter the value want to push\n");
			scanf("%d",&c);
			push(c);
		}
		else if(n==2)
		{
			x=pop();
			if(x==0)
				printf("Stack is empty\n");
			else
				printf("%d is pop from stack\n",x);
		}
		else if(n==3)
		{
			print();
		}
		else if(n==4)
		{
			return;
		}
		else
		{
			printf("Enter proper choice\n");
			continue;
		}
	}

}

void push(int i)
{

	if(t>=10)
	{
		printf("Stack is full\n");
		return;
	}
	ST *new;
	new=malloc(sizeof(ST));
	t++;
	new->value=i;        
	new->next=headptr;
	headptr=new;

}

int pop(void)
{
	int x;
	if (t==-1)
	{
		printf("Stack is empty\n");
		return 0;
	}
	ST  *temp;
	temp=headptr;
	x=temp->value;
	headptr=headptr->next;
	free(temp);
	t--;
	return(x);
}

void print(void)
{
	ST *temp;
	temp=headptr;

	while(temp)
	{
		printf(" %p || %d\n",temp,temp->value);
		temp=temp->next;
	}
}



















