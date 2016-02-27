#include<stdio.h>
void strcpy1(char *,char *);
main()
{
char s[10],d[10];

printf("Enter the souce string\n");
scanf("%s",s);
strcpy1(s,d);

printf("copy string=%s\n",d);
}

void strcpy1(char *s,char *d)
{
for(;*s;)
     *d++=*s++;
*d='\0';
}



