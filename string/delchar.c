#include<stdio.h>
main()
{
char s[10];
int pos,i;
printf("Ente the string\n");
scanf("%s",s);

printf("Enter the position which want to remove\n");
scanf("%d",&pos);

for(i=pos;s[i];i++)
s[i]=s[i+1];

//s[i]='\0';
printf("%s\n",s);
}

