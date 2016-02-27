#include<stdio.h>
main()
{
char s[20],temp;
int i,j,k;
printf("Enter the string...\n");
gets(s);

for(i=0;s[i];i++)
{ temp=s[i];
    for(j=i+1;s[j];j++)
       {
         if(temp==s[j])
              {
                for(k=j;s[k];k++)
                    s[k]=s[k+1];
                  j=j-1;
               }
        }
}

puts(s);
}





