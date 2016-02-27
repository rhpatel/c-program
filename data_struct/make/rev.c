#include"header.h"

void rev_data(B *ptr)
{
	B **p,*temp,v,*temp1,*q;
	int i,j,c;
	c=count(ptr);

	p=malloc(sizeof(B*)*c);

	temp=ptr;

	/*	i=0;
		while(temp)
		{
		p[i++]=temp;
		temp=temp->next;
		}
	 */
	temp=ptr;
	for(i=0;i<c/2;i++)
	{
		temp1=ptr;
		for(j=0;j<c-1-i;j++)
			temp1=temp1->next;

		/*		v.rollno=temp->rollno;
				strcpy(v.name,temp->name);
				v.marks=temp->marks; 

				temp->rollno= temp1->rollno;
				strcpy(temp->name,temp1->name);
				temp->marks=temp1->marks; 

				temp1->rollno=v.rollno;
				strcpy(temp1->name,v.name);
				temp1->marks=v.marks; 
		 */                
		v=*temp;
		*temp=*temp1;
		*temp1=v;

		q=temp->next;
		temp->next=temp1->next;
		temp1->next=q;   
		temp=temp->next;
	}
}

void rev_link(B **ptr)
{
	B *p,*q,*r;
	p=*ptr;
	q=0;

	while(p)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	*ptr=q;
}

void rev_link1(B **ptr)
{

	B **p,*temp;
	int c,i,j;

	c=count(*ptr);
	p=malloc(sizeof(B*)*c);
	temp=*ptr;
	i=0;
	while(temp)
	{
		p[i++]=temp;
		temp=temp->next;
	}

	p[0]->next=0;

	for(i=1;i<c;i++)
	{
		p[i]->next=p[i-1];
	}

	*ptr=p[c-1];
}

























