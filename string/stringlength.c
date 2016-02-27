#include<stdio.h>
main()
{

char s[15];
char *c=s;
int i;
printf("Enter the string....\n");
scanf("%[^\n]",s);


for(i=0;*c++;i++);

printf("String length =%d",i);
}
