#include<stdio.h>
main()
{

char s[15]="aBc123DeF456",s1[10];
int i,j,k=0;

for(i=0;s[i];i++)
{

  if(s[i]>='A' && s[i]<='Z')
     s[i]=s[i]+32;
 else if(s[i]>='a' && s[i]<='z')
     s[i]=s[i]-32;
 
 else if(s[i]>='0' && s[i]<='9')
         s1[k++]=s[i];
}
s1[k]='\0';

for(i=0;s1[i];i++);

for(j=0,i=i-1;s[j];j++)
{
   if(s[j]>='0'&& s[j]<='9')
      { 
        s[j]=s1[i--];
      }
}       



puts(s);
printf("\n");
puts(s1);
}





