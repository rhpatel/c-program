#include<stdio.h>
void rev(char *,char *);
main()
{
char s[30],temp,*p,*q;

int i,j,k;

printf("Enter the sentence...\n");
gets(s);


for(i=0;s[i];i++)
   {p=&s[i];
      for(j=i;s[j];j++)
           if(s[j]==' ')
               break;
       q=&s[j-1];
       i=j;
        rev(p,q);
      if(s[i]==0)
         break;

     }
puts(s);
}
void rev(char *p, char *q)
{
char temp;
for(  ;p<q;p++,q--)
    {
      temp=*p;
      *p=*q;
      *q=temp;
    }
}





