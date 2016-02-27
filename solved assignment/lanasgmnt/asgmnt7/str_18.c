/*
 program to reverse the words in a given string line.
       Ex : “I am a good boy”
	  “I ma a doog yob”
*/

#include<stdio.h>
main()
{
char s[50],temp,*p,*q;
int i,j,k;
printf("Enter the string..\n");
gets(s);

for(i=0;s[i];i++)
 {
    p=&s[i];
       for(j=i;s[j];j++)
          if(s[j]==' ')
              break;
             
           q=&s[j-1];
               i=j;
             
   
   
   for( ;p<q;p++,q--)
     {
      temp=*p;
      *p=*q;
      *q=temp;
       }
 
 }

puts(s);
}
