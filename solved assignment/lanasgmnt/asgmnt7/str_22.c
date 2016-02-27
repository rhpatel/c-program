#include<stdio.h>
main()
{

char ch1[256]={0},ch2[256]={0},s1[40],s2[40];
int i;
printf("Enter the string..\n");
gets(s1);

printf("Enter the second string\n");
gets(s2);

puts(s2);
for(i=0;s1[i];i++)
ch1[s1[i]]++;

for(i=0;s2[i];i++)
ch2[s2[i]]++;

for(i='A';i<='z';i++)
{
  if(i>'Z'&&i<'a')
    continue;
 if(ch1[i]!=ch2[i])
    break;
}
i--;
if(i=='z')
printf("Anagram");
else
printf("Not anagram");

printf("\n");
}

