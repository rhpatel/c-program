/*7) Write a Singly linked list program to delete a perticular node from last and also find the count  of no.of nodes using only single traverse.
	Ex:  Suppose  if there are  7 nodes, and if 2nd node has to be delete from last, then it is  6th 
	        node from starting.
		Before delete  : A --- B --- C --- D --- E --- F --- G
		After delete    : A ---  B --- C --- D --- E --- G
*/

#include"header.h"

void del_node_last(B **);

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
	save(headptr);
	del_node_last(&headptr);

	printf("\n----------------\n");
	print(headptr);
}

void del_node_last(B **ptr)
{
	int c,i=0,j,n;
	B **p,*temp,*temp1,v;
	c=count(*ptr);
	temp=*ptr;
	p=malloc(sizeof(B*)*c);

	while(temp)
	{
		p[i++]=temp;
		temp=temp->next;
	}


	printf("Enter the number want to delete from last\n");
	scanf("%d",&n);
          
if(p[c-n]==*ptr)
{
*ptr=p[c-n]->next;
}
else
{          
    p[c-n-1]->next=p[c-n]->next;
} 
free(p[c-n]);

}

