#include<stdio.h>
void strprnt(char *);
main()
{
char s[10];
printf("Enter the string");
scanf("%s",s);
strprnt(s);
}

void strprnt(char *p)
{
for(;*p;printf("%c",*p++));
printf("\n");
}

