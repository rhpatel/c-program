//14) Write a Singly linked list program to check the given linked list is palindrome or not.


#include"header.h"

void palin(B **);

main()
{
	B *headptr=0;
	char ch;
	read(&headptr);
	print(headptr);
	printf("\n---------------\n");
/*	do
	{
		add_begin(&headptr);
		printf("Do you want to add Y/y\n");
		scanf(" %c",&ch);
	}while(ch=='Y' || ch=='y');
	print(headptr);
	save(headptr);
*/	palin(&headptr);

	printf("\n----------------\n");
	print(headptr);
}

void palin(B **ptr)
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

for(i=0;i<c/2;i++)
{
  if((p[i]->rollno==p[c-1-i]->rollno) && ((strcmp(p[i]->name,p[c-1-i]->name)==0)))
     continue;
 
  else
    {
    printf("Linked list not palindrom\n");
    return;
    }
} 
   printf("Linked list id  palindrom\n");
}






 



