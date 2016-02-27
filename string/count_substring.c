#include<stdio.h>
main()
{
char s[20],s1[10];
int i,j,k,c=0;

printf("Enter the string...\n");
scanf("%s",s);
printf("Enter the substring...\n");
scanf("%s",s1);

for(i=0;s[i];i++)
{  
  	if(s[i]==s1[0])
            { 
               for(j=1;s1[j];j++)
                     {
                      if(s1[j]!=s[i+j])
                          break;
                    }
           if(s1[j]=='\0')
                    c++;
          }
   }   
                          
 printf("count=%d\n",c);
}





