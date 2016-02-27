#include<stdio.h>
main()
{


char s[15],temp;
int i,j,k;
printf("Enter the string...\n");
scanf("%s",s);
for(i=0;s[i];i++);
//k=i-1;
k=i;
for(i=0;i<k-1;i++)
{ 
   for(j=0;j<k-i-1;j++)
      {
        if(s[j]>s[j+1])
         { 
           temp=s[j];
            s[j]=s[j+1];
              s[j+1]=temp;
           }
         } 
         
}

printf("%s",s);
}        



