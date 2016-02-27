#include<stdio.h>
main()
{
char s[10]="rinkesh",s1[10];
char *p=s,*q=s1;
while(*q++=*p++);

puts(s1);
}
