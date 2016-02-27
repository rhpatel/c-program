//Write a program to convert the characters Upper to Lower and Lower to Upper in a
//      given string.
#include<stdio.h>
main()
{

char s[10];
int i;
printf("Enter the character..\n");
scanf("%s",s);

for(i=0;s[i];i++)
{
 if(s[i]>='A'&&s[i]<='Z')
   s[i]=s[i]+32;
 else if(s[i]>='a'&&s[i]<='z')
   s[i]=s[i]-32;
}
puts(s);
}

