#include<stdio.h>
main()
{
char s[10];
int i,j,k;


printf("Enter the string...\n");
gets(s);

for(i=0;s[i];i++)
  {
   for(j=i+1;s[j];j++)
     { 
        if(s[i]==s[j])
           {
             for(k=j;s[k];k++)
                 {
                  s[k]=s[k+1];
                 }  
                j=j-1;
             }
        }
    }
puts(s);
}


