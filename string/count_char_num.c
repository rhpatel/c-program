#include<stdio.h>
main()
{
int i,num=0,sp=0,cu=0,cl=0;
char s[20];
printf("Enter the string..\n");
gets(s);

for(i=0;s[i];i++)
{
  if(s[i]>='A'&& s[i]<='Z')
       cu++;
  else if(s[i]>='a' && s[i]<='z')
       cl++;
  else if(s[i]>='0' && s[i]<='9')
       num++;
  else
       sp++;
}
printf("Upper=%d\n Lower=%d\nDigit=%d\nSpchar=%d\n",cu,cl,num,sp);
}
  

