#include<stdio.h>
#include<string.h>
main()
{
char ch[5][15]={"abc","xyz","ghi","pqr","mno"},temp[15];
int i,j,k;

for(i=0;i<5;i++)
printf("%s ",ch[i]);

for(i=0;i<5-1;i++)
 {
  for(j=0;j<5-i-1;j++)
     { 
       k=strcmp(ch[j],ch[j+1]);
         printf("%d ",k);
         if(k==1)
       {  printf("\ni\n");
         strcpy(temp,ch[j]);
         strcpy(ch[j],ch[j+1]);
         strcpy(ch[j+1],temp);
       }
     }    
  }       
printf("\n");
for(i=0;i<5;i++)
printf("%s ",ch[i]);

}





