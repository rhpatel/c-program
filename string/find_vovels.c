#include<stdio.h>
main()
{
char s[15];
int i;

printf("Enter the string...\n");
scanf("%s",s);
for(i=0;s[i];i++)
{
if(s[i]==('a'||'e'||'i'||'u'))
//if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
   printf("%c ",s[i]);
}
}


