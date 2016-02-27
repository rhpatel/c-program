#include<stdio.h>
static int p=-1;
int s[10];
void push(int);
int pop(void);
void print(void);
main()
{
	int i,x,c,num,ele;
	ele=sizeof(s)/sizeof(s[0]);


	while(1)
	{
		printf("\nEnter you want....\n1) push \n2)pop \n3)view stack\n4)Exiti\n");
		scanf("%d",&c);

		if(c==1)
		{
			printf("Enter the Value\n");
			scanf("%d",&num);
			push(num);
		}
		else if(c==2)
		{
			x=pop();
			printf("Removed=%d",x);
		}
		else if(c==3)
			print();
		else if(c==4)
		{
			printf("Thanks\n");
			return;
		}

		else
			printf("Unknown option");
	}

}

void print(void)
{
	int i;
	printf("////////////////////STACK/////////////////\n");
	for(i=p;i>=0;i--)
		printf("ADD%p| %d |\n",&s[i],s[i]);

}

void push(int i)
{
	p++;
	if(p>10)
	{printf("stack is full\n");
		return;
	}
	s[p]=i;
//        printf("%d\n",p);
}

int pop(void)
{
	int x;

	if(p==-1)
	{printf("stack is Empty\n");
		return 0;
	}
	x=s[p];
        p--;
 	return(x); 
}





