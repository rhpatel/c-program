/*
Write a program to read two strings through the keyboard like the following example 
       and replace any word of  the second string with the first string.
      Ex: Input:-     Fist String      : “Tomorrow”
                            Second String : “Today  is  Sunday”
                             Replace word : “Today”.
*/

#include<stdio.h>
#include<string.h>
main()
{
char s1[30],s2[10],s3[10],*p;
int i,j,k,l,m;
printf("Enter the string..\n");
gets(s1);
printf("Enter the word for replace\n");
gets(s2);
printf("Enter the word replace with..\n");
gets(s3);

for(i=0;s1[i];i++)
{
  if(s1[i]==s3[0])
  { p=&s1[i];
    k=i;
    for(j=1;s3[j];j++)
     if(s1[i+j]!=s3[j])
          break;
     if(s3[j]=='\0')
      break;
  }
}

 l=strlen(s3);
for(i=k;s1[i];i++)
 s1[i]=s1[i+l];
m=strlen(s2);

for(i=0;s1[i];i++);
for(i=i;i>=k;i--)
s1[i+m]=s1[i];

for(i=0;s2[i];i++)
   *p++=s2[i];

puts(s1);
}

