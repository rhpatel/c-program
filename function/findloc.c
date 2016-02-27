#include<stdio.h>
char * charfind(char *,char);
main()
{

char s[10],ch,*l;
printf("Enter the string\n");
scanf("%s",s);
printf("%p\n",s);
printf("Enter the character\n");
scanf(" %c",&ch);
l=charfind(s,ch);
printf("Address of location=%p\n",l);
}
char * charfind(char *p,char ch)
{
for(;*p;p++)
{
if(*p==ch)
return p;
} 
return 0;
}

    

