#include<stdio.h>

main()
{
char s1[2020];
int i,j;
printf("Enter the string\n");
gets(s1);

for(i=0;s1[i];i++)
   { 
       if(s1[i]==' ')
         { 
            for(j=i;s1[j];j++)
                   s1[j]=s1[j+1];  
                i--;
          }
}
printf("\n%s",s1);
}
