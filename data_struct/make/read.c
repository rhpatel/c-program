#include"header.h"

void read(B **ptr)
{

B *new,*old,v;

FILE *fp;
fp=fopen("data","r");
if(fp==0)
{
printf("no such file present\n");
return;
}

while((fscanf(fp,"%d %s %f\n",&v.rollno,v.name,&v.marks))!=EOF)
{

new=malloc(sizeof(B));
*new=v;

if(*ptr==0)
{
  new->next=*ptr;
  *ptr=new;
  old=new;
}
else
{
 new->next=old->next;
 old->next=new;
 old=new;
}
}
}
















