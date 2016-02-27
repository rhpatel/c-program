#include"header.h"

void rev(B **ptr)
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

void rev_1(B **ptr)
{
	B *temp,**p;
	int c,i;
	c=count(*ptr);
	temp=*ptr;
	p=malloc(sizeof(B *)*c);
   printf("%d",c);
i=0;
	while(temp)
	{
		p[i++]=temp;
		temp=temp->next;
       printf("%p\n",p[i-1]);
                 
	}

	//	p[i]=temp;
p[0]->next=0;
	for(i=1;i<c-1;i++)
	{
		p[i]->next=p[i-1];
             
            // printf("%p\n",p[i-1]);
	}

	*ptr=p[c-1];
}










