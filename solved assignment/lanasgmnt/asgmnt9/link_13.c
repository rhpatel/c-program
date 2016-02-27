//13) Write a program to reverse all links of given Singly linked list 
//	i) using loops       ii) using recursion.  --- Remaining


 


#include"header.h"

void rev_all_link(B **);

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
	rev_all_link(&headptr);

	printf("\n----------------\n");
	print(headptr);
}

void rev_all_link(B **ptr)
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


// using simple loop

p[0]->next=0;

for(i=1;i<c;i++)
{
p[i]->next=p[i-1];
}

*ptr=p[c-1];

} 

