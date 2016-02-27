#include<stdio.h>
main()
{
char s[50];
int i,j,k;

printf("Enter the sentence..\n");
gets(s);

for(i=0;s[i];i++)
{
   if((s[i]==' ')&&(s[i+1]==' '))     
      {  
         for(j=i+1;s[j];j++)
             {  
                s[j]=s[j+1];
             }
          i=i-1;
       }
}
puts(s);
}         
     

