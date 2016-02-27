#include"header.h"

void del(B **ptr)
{
int n;
B *temp,*old;
temp=*ptr;

printf("Ente the rollno wnat to remove\n");
scanf("%d",&n);

while(temp)
 {
  if(temp->rollno==n)
      {
       if(temp==*ptr)
          {
           *ptr=temp->next;
           free(temp);
          return;
          }
       else
          {
           old->next=temp->next;
           free(temp);
          return;
          }
        }
    old=temp;
   temp=temp->next;
 }
printf("No such record found\n");
}
  
void del_all(B **ptr)
{
B *temp;

temp=*ptr;
while(*ptr)
{
*ptr=temp->next;
free(temp);
temp=*ptr;
}

}


void del_dup(B **ptr)
{
	B *temp,**p,temp1;
	int i,j,k,c;

	c=count(*ptr);
	temp=*ptr;
	p=malloc(sizeof(B*)*c);
	i=0;
       printf("ptr=%p\n",temp);
	while(temp)
	{	
           p[i]=temp;
		temp=temp->next;
                   i++;
	}

	for(i=0;i<c-1;i++)
	{
		{for(j=i+1;j<c;j++)
			{  
				if(p[i]->rollno==p[j]->rollno)
				{    
                                    // printf("HIT\n");
                                     
					p[j-1]->next=p[j]->next;
					free(p[j]);
					for(k=j;k<c-1;k++)
					{
                                           p[k]=p[k+1];
					} 
                                        j--;  
					c--;
                                      
				}
			}
		}
	}
}          




/*







temp=*ptr;
old=*ptr;
for(i=0;i<c-1;i++)
{
 new=temp->next;
  for(j=1+i;j<c;j++)
      {
       if(temp->rollno == new->rollno)
        {
         old->next=new->next;  
         temp1=new;
         new=new->next;
         free(temp1);
         c--;
        continue;
        }
       old=old->next;
       new=new->next;
     }
  old=temp;
  temp=temp->next;
}
}
*/


