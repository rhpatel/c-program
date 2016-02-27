// program to find the no.of times substring is found in a given string

#include<stdio.h>
main()
{
char s1[20],s2[10];
int i,j,c=0;
printf("Enter the string...\n");
gets(s1);
printf("enter the sub string...\n");
gets(s2);

for(i=0;s1[i];i++)
 { 
    if(s1[i]==s2[0])
     {
       for(j=1;s2[j];j++)
          if(s1[i+j]!=s2[j])
               break;
       if(s2[j]=='\0')
           c++;
      }
  }
printf("count=%d",c);
}






