//Write a recursive function to revese the string. (Note : not just reverse printing
  //      charecter by charecter)
 
#include<stdio.h>
void revstr(char*,char*);
main()
{
char s[15];
int i;
printf("Enter the string...\n");
gets(s);
for(i=0;s[i];i++);

revstr(s,s+i-1);
puts(s);
printf("\n");
}

void revstr(char *p,char *q)
{
  char temp;
  if(p<q)
   { 
    temp=*p;
    *p=*q;
    *q=temp;
   revstr(p+1,q-1);
   }
}

   









