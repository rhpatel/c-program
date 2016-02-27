
#include"header.h"
void save(B *ptr)
{
FILE *fp;

fp=fopen("data","w");

while(ptr)
{
fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
ptr=ptr->next;
}
}
