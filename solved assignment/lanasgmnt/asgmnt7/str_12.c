#include<stdio.h>
main()
{
char s[15],c[256]={0};
int i;
printf("Enter the string...\n");
gets(s);

for(i=0;s[i];i++)
c[s[i]]++;
  

for(i='A';i<='z';i++)
if(c[i]>1)
printf("%c is %d times\n",i,c[i]);
}  






