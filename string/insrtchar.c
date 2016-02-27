#include<stdio.h>
main()
{
int i,j,pos;
char s[10],ch;
printf("Enter the string\n");
scanf("%s",s);

printf("Enter the character\n");
scanf(" %c",&ch);

printf("Enter the position\n");
scanf("%d",&pos);

for(i=0;s[i];i++);

for(i=i;i>=pos;i--)
{
s[i+1]=s[i];
}

s[pos]=ch;

printf("data=%s\n",s);



}







