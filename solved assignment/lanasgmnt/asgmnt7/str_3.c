#include<stdio.h>
main()
{
char s[15],ch;
int i,c=0;

printf("Enter the string...\n");
scanf("%s",s);

printf("Enter the character ...\n");
scanf(" %c",&ch);


for(i=0;s[i];i++)
  if(s[i]==ch)
     c++;

printf("Character %c found %d times\n",ch,c);
}









