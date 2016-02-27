#include<stdio.h>
main()
{

char s1[20],s2[20];
int c1[256]={0},c2[256]={0},i;
printf("Enter first string\n");
gets(s1);
printf("Second string\n");
gets(s2);

for(i=0;s1[i];i++)
c1[s1[i]]++;

for(i=0;s2[i];i++)
c2[s2[i]]++;


for(i='A';i<='z';i++)
 if(c1[i]!=c2[i])
       break;
i--;
if(i=='z')
printf("String is anagram");
else 
printf("Not anagarm\n");

}

 



