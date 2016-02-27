/*
 program to replace the words in reverse order in a given string line.
	Ex:  Input   :  “world changed your thoughts”
	       Output :  “thoughts your changed world”
*/
#include<stdio.h>
#include<string.h>
void rev(char *,char *);
main()
{
char s[30],*p,*q;
int i,j;
printf("Enter the string..\n");
gets(s);
p=s;
q=s+strlen(s)-1;
rev(p,q);                             //reverse  whole string...


for(i=0;s[i];i++)
 {
   p=&s[i];
    for(j=i;s[j];j++)
       if(s[j]==' ')
         break;
     q=&s[j-1];
     i=j;
   rev(p,q);
           
}
puts(s);
}

void rev(char *p,char *q)
{
 char temp;
  for(;p<q;p++,q--)
   {
     temp=*p;
    *p=*q;
    *q=temp;
   }

}

