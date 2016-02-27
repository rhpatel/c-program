#include<stdio.h>
main()
{
char s1[10],ch;
int i,c=0;
printf("Enter the strting...\n");
scanf("%s",s1);
printf("Enter the character want to find occurance\n");
scanf(" %c",&ch);

for(i=0;s1[i];i++)
{ if(ch==s1[i])
      c++;
   }

printf("Count=%d\n",c);
}






