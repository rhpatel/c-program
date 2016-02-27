#include<stdio.h>
main()
{
char s1[15];
int i,c=0;
printf("Enter the string\n");
gets(s1);
for(i=0;s1[i];i++)
{
if((s1[i]==' ')&&(s1[i+1]!='\0'))
  c++;
}

printf("Word count =%d\n",c+1);
}
