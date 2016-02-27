//12) Write a  program to reverse the links of first 'N' no.of nodes of a given Singly linked list.
//                 Before reverse : A --- B --- C --- D --- E --- F --- G --- H 
// If  M = 5, After reverse   :  E --- D --- C --- B --- A --- F --- G --- H 


#include"header.h"

void rev_m_link(B **);

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
	rev_m_link(&headptr);

	printf("\n----------------\n");
	print(headptr);
}

void rev_m_link(B **ptr)
{
	int c,i=0,j,m;
	B **p,*temp,*temp1,v;
	c=count(*ptr);
	temp=*ptr;
	p=malloc(sizeof(B*)*c);

 while(temp)
	{
		p[i++]=temp;
		temp=temp->next;
	}

printf("Enter the value of m \n");
scanf("%d",&m);

p[0]->next=p[m];
for(i=1;i<m;i++)
{
p[i]->next=p[i-1];
}

*ptr=p[m-1];
}
 



