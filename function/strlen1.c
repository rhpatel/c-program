#include<stdio.h>
int strlen1(char *);
main()
{
char s[15];
int l;
printf("Enter the string\n");
scanf("%s",s);

l=strlen1(s);
printf("Length =%d\n",l);
}

int strlen1(char *p)
{
int i;
for(i=0;p[i];i++);
return i;
}


