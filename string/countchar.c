#include<stdio.h>
main()
{
char s[10],ch;
int i,c=0;

printf("Enter the string\n");
scanf("%s",s);
printf("Enter the character count\n");
scanf(" %c",&ch);


for(i=0;s[i];i++)
{
if(s[i]==ch)
c++;
}

printf(" %d\n",c);
}

