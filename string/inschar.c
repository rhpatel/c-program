#include<stdio.h>
main()
{
char s[10],ch;
int i,j,pos;

printf("Enter the string\n");
scanf("%s",s);
printf("Enter the character want to insert\n");
scanf(" %c",&ch);
printf("Enter the position \n");
scanf("%d",&pos);

for(i=0;s[i];i++);

for(i;i>=pos;i--)
s[i+1]=s[i];

s[i+1]=ch;

printf("%s\n",s);
}




