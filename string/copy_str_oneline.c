#include<stdio.h>
main()
{
char s1[10]="ASDFGH",s2[10];
char *p=s1,*q=s2;
while(*q++=*p++);

printf("%s",s2);
}


