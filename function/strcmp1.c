#include<stdio.h>
int string1(char *,char *);
main()
{
char s1[10],s2[10];
int i;
printf("Enter the first string\n");
scanf("%s",s1);
printf("Ente the second string\n");
scanf("%s",s2);
i=string1(s1,s2);

if(i==0)
printf("Equal sting\n");
else if(i==1)
printf("S1 is Greater\n");
else 
printf("S2 is Greater\n");
}

int string1(char *p,char *q)
{
for( ;*p;p++,q++)
{
if(*p != *q)
break;
}
if(*p==*q)
  return 0;
else if(*p > *q)
 return 1;
else
return -1;
}
