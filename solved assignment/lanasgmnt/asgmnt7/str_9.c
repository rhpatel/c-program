#include<stdio.h>
main()
{
char s[10],ch;
int i,j,k;
printf("enter the string...\n");
scanf("%s",s);
printf("Enter the character..\n");
scanf(" %c",&ch);

for(i=0;s[i];i++)
{
 if(s[i]==ch)
   {
    for(j=i;s[j];j++)
     { s[j]=s[j+1];}
        i=i-1;
     }
}
 puts(s);
        }
       

