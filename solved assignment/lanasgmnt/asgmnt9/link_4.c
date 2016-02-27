/*4) Write a prorgram to swap 'k'th node from begining and 'k' node from end in a Singly linked list. For Ex: if nodes are
  A --- B --- C --- D --- E --- F --- G --- H --- I
  if k = 2 , then o/p should be 
  A --- H --- C --- D --- E --- F --- G --- B --- I 
 */

#include"header.h"

void swap(B **);

main()
{
	B *headptr=0;
	char ch;

	do
	{
		add_begin(&headptr);
		printf("Do you want to add Y/y\n");
		scanf(" %c",&ch);
	}while(ch=='Y' || ch=='y');

	print(headptr);
	swap(&headptr);

	printf("\n----------------\n");
	print(headptr);
}

void swap(B **ptr)
{
	int c,i=0,n;
	B **p,*temp;
	c=count(*ptr);
	temp=*ptr;
	p=malloc(sizeof(B*)*c);

	while(temp)
	{
		p[i++]=temp;
		temp=temp->next;
	}

	printf("Enter which node you want to swap\n");
	scanf("%d",&n);
	if(n==1)
	{
		B *temp2;
		*ptr=p[c-1];
		temp2=p[c-1]->next;
		p[c-1]->next=p[1];
		p[c-2]->next=p[n-1];
		p[n-1]->next=temp2;

	}
	else
	{

        p[n-2]->next=p[c-n];
        p[c-n]->next=p[n];
        p[c-n-1]->next=p[n-1];
        p[n-1]->next=p[c-n+1];
             
	}
}









