#include<stdio.h>
main()
{
char s[15];
int upp=0,low=0,sp=0,i;

printf("enter the character..\n");
gets(s);

for(i=0;i<s[i];i++)
  {
    if(s[i]>='A'&&s[i]<='Z')
       upp++;
     
    else if(s[i]>='a'&&s[i]<='z')
       low++;
     else
       sp++;
  }
 
printf("Upper char =%d\nLower char is %d \n Special char is %d\n",upp,low,sp);
}

