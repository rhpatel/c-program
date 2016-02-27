#include<stdio.h>
#include<string.h>
main()
{
char s1[15],s2[15],*p,*q,temp;
int i,j;
 
printf("Enter the string..\n");
scanf("%s",s1);

strcpy(s2,s1);

p=s2;
q=s2+strlen(s2)-1;
for(;p<q;p++,q--)
  {
   temp=*p;
   *p=*q;
   *q=temp;
  }

for(i=0;s1[i];i++)
 {
  if(s1[i]!=s2[i])
     break;
  }


if(s1[i]==s2[i])
  printf("String is palindrom\n");
else
  printf("Not Palindrom\n");
}
