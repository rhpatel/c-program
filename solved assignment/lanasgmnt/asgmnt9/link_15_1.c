//15) Write a Singly linked list program to implement Stack and Queue operations.

// Queue implementation




#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
	int value;
	struct queue *next;
}Q;

Q *headptr=0;
void print(void);
void push(int);
int pop(void);
static int t=-1;

main()
{


	int c,n,x;

	while(1)
	{

		printf("Enter the choice \n1)push\n2)pop\n3)view queue\n4)exit\n");
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
	Q *new;
	new=malloc(sizeof(Q));
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
		printf("queue is empty\n");
		return 0;
	}
	Q  *temp,*old;
	temp=headptr;
      while(temp->next)
        {
          old=temp;
          temp=temp->next;
        }
       
        old->next=0;
        x=temp->value;
        free(temp);
	t--;
	return(x);
}

void print(void)
{
	Q *temp;
	temp=headptr;

	while(temp)
	{
		printf(" %p || %d\n",temp,temp->value);
		temp=temp->next;
	}
}



















