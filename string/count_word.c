#include<stdio.h>
main()
{
char s[50];
int i,c=1;

printf("Enter the sentence...\n");
gets(s);
puts(s);
for(i=0;s[i];i++)
{  if(s[i]==' ')
     c++;
}
printf("Count=%d",c);
}




