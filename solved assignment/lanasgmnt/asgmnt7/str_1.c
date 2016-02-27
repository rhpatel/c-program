#include<stdio.h>
main()
{
char s[15],*ch;
int i;
printf("Enter the string\n");
scanf("%s",s);
ch=s; 

for(i=0;*ch++;i++);
printf("String length=%d\n",i);
}


