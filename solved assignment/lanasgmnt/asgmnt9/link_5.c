/*
   5) Write a Singly linked list program to swap the adjacent nodes.
   For Ex: if nodes are 
   A --- B --- C --- D --- E --- F --- G --- H --- I
   then o/p should be
   B --- A --- D --- C --- F --- E --- H --- G --- I
 */


#include"header.h"

void swap_adj(B **);

main()
{
	B *headptr=0;
	char ch;
	read(&headptr);
	print(headptr);
	printf("\n---------------\n");
	do
	{
		add_begin(&headptr);
		printf("Do you want to add Y/y\n");
		scanf(" %c",&ch);
	}while(ch=='Y' || ch=='y');

	print(headptr);
  //      save(headptr);
	swap_adj(&headptr);

	printf("\n----------------\n");
	print(headptr);
}

void swap_adj(B **ptr)
{
	int c,i=0,n;
	B **p,*temp,*temp1,v;
	c=count(*ptr);
	temp=*ptr;
	p=malloc(sizeof(B*)*c);

	while(temp)
	{
		p[i++]=temp;
		temp=temp->next;
	}
int k;
for(i=0,k=0;k<c/2;k++,i=i+2)
 {
  temp=p[i];
  p[i]=p[i+1];
  p[i+1]=temp;
 }	
 *ptr=p[0];
for(i=0;i<c-1;i++)
p[i]->next=p[i+1];

p[i]->next=0;
}      




