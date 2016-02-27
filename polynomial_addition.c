#include<stdio.h>
#include<stdlib.h>
typedef struct poly
{
	int coeff;
	int expo;
	struct  poly *next;
}B;

void add(B **);
void print(B *);
void save(B *);
void sum(B*,B*,B**);
main()
{
	B *hp1,*hp2,*hp3;
       hp1=hp2=hp3=0;

	add(&hp1);
	printf("\nAdd second Polynomial\n");         
	add(&hp2);
        printf("\nFirst Polynomial\n");
	print(hp1);
	printf("\nSecond Polynomial\n");
	print(hp2);
	sum(hp1,hp2,&hp3);
	//       save(hp1);
	printf("\nSum Polynomial\n");
      print(hp3);
}

void add(B **ptr)
{
	B *new=0,*old=0;

	char ch;
	do
	{
		new=malloc(sizeof(B));
		printf("Enter coeff and Expo  _coeff*X^_expo \n");
		scanf("%d %d",&new->coeff,&new->expo);


		if(*ptr==0 || (*ptr)->expo<new->expo)
		{
			new->next=*ptr;
			*ptr=new;
		}

		else
		{
			old=*ptr;
			while(old)
			{ int d;
				if(old->next==0 || old->next->expo<new->expo)
				{       if(old->expo==new->expo)
                                         {
                                          printf("Data already present\n1)replace 2)no replace\n");
                                          scanf("%d",&d);
                                          if(d==1)
                                          old->coeff=new->coeff;
                                          else
                                          old->coeff=old->coeff;

                                          goto abc;                                           
                                          }
                                             
                                        
					new->next=old->next;
					old->next=new;
					break;
				}
                                  
				old=old->next;
                         }			
		}

		abc:printf("do you want to add Y/y\n"); 
		scanf(" %c",&ch);
	} while( ch=='Y'||ch=='y'); 

}


void print(B *ptr)
{

	while(ptr)
	{
		printf("%dX^%d ",ptr->coeff,ptr->expo);
		if((ptr->next)!=0)
			printf("+");

		ptr=ptr->next;
	}
}


void sum(B *p1,B *p2,B **p3)
{

	B *new,*temp1;
	while(p1&&p2)
	{
		new=malloc(sizeof(B));
		
            if(p1->expo==p2->expo)
		{
                   

		       new->coeff=((p1->coeff)+(p2->coeff));
		       new->expo=p1->expo;
                       	if(*p3==0)
			{
				new->next=*p3;
				*p3=new;
			}
			else
			{ temp1=*p3;
				while(temp1->next)
					temp1=temp1->next;
				new->next=temp1->next;
				temp1->next=new;
			}
		
         p1=p1->next;
         p2=p2->next;
                continue;
                  }
             if(p1->expo>p2->expo)
                 {
                   
                   new->coeff=p1->coeff;
                   new->expo=p1->expo;                   
                      
                        	if(*p3==0)
			{
				new->next=*p3;
				*p3=new;
			}
			else
			{ temp1=*p3;
				while(temp1->next)
					temp1=temp1->next;
				new->next=temp1->next;
				temp1->next=new;
			}
                    p1=p1->next;
                   continue;
		   }
                    
             if(p2->expo>p1->expo)
                 {
                   
                   new->coeff=p2->coeff;
                   new->expo=p2->expo;                   
                   
                 	if(*p3==0)
			{
				new->next=*p3;
				*p3=new;
			}
			else
			{ temp1=*p3;
				while(temp1->next)
					temp1=temp1->next;
				new->next=temp1->next;
				temp1->next=new;
			}
                    p2=p2->next;
                   continue;
		   }
                                          


	}

      if(p1==0)
       {
        while(p2)
         {
         
           new=malloc(sizeof(B));
                    new->coeff=p2->coeff;
		       new->expo=p2->expo;
                       	if(*p3==0)
			{
				new->next=*p3;
				*p3=new;
			}
			else
			{ temp1=*p3;
				while(temp1->next)
					temp1=temp1->next;
				new->next=temp1->next;
				temp1->next=new;
			}
		
         p2=p2->next;
          }
       }


      if(p2==0)
       {
        while(p1)
         {
         
           new=malloc(sizeof(B));
                    new->coeff=p1->coeff;
		       new->expo=p1->expo;
                       	if(*p3==0)
			{
				new->next=*p3;
				*p3=new;
			}
			else
			{ temp1=*p3;
				while(temp1->next)
					temp1=temp1->next;
				new->next=temp1->next;
				temp1->next=new;
			}
		
         p1=p1->next;
          }
       }


} 































