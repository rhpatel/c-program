#include<stdio.h>

main()
{
char s[10],ch1,ch2;
int i;

printf("Enter the string \n");
scanf("%s",s);

printf("Enter the character want to replace with one\n");
scanf(" %c %c",&ch1,&ch2);

for(i=0;s[i];i++)
if(s[i]==ch1)
  s[i]=ch2;

printf("%s\n",s);
}






