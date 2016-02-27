#include<stdio.h>
main()
{
char s[10],c1,c2;
int i;

printf("Enter the string\n");
scanf(" %s",s);
printf("Enter find char\n");
scanf(" %c",&c1);

printf("Replace character");
scanf(" %c",&c2);


for(i=0;s[i];i++)
{
if(s[i]==c1)
s[i]=c2;
}

printf("Updated string=%s\n",s);
}
