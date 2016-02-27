#include"header.h"


void del(B **ptr)
{

B *new,*old;
new=*ptr;
int n;

printf("Ente the rollno n");
scanf("%d",&n);

while(new)
{
   if(new->rollno==n)
    {
      if(new==*ptr)
       {
         *ptr=new->next;
         free(new);
         return;
       }
      else
       {
        old->next=new->next;
        free(new);
        return;
       } 
     }  
  
old=new;
new=new->next;    
}      
 printf("No such node");

}



