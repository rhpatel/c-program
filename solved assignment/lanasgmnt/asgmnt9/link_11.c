//) Write a program to reverse the data of only first 'M' no.of nodes of 'N' no.of nodes.
//          Input the 'M' value during runtime.

#include"header.h"

void rev_m(B **);

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
	rev_m(&headptr);

	printf("\n----------------\n");
	print(headptr);
}

void rev_m(B **ptr)
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
scanf("%d",&c);

   for(i=0;i<c/2;i++)
   {
    v=*p[i];
   *p[i]=*p[c-1-i];
   *p[c-1-i]=v;

    
   temp1= p[i]->next;
   p[i]->next=p[c-1-i]->next;
   p[c-1-i]->next=temp1;
       
 }

}
