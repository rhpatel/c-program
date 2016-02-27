#include<stdio.h>
#include<string.h>

main()
{

char s[5][10],temp[10];
int i,j,k;

printf("Enter the string....\n");
for(i=0;i<5;i++)
scanf("%s",s[i]);

printf("Entered string.....\n");
for(i=0;i<5;i++)
printf("%s",s[i]);


for(i=0;i<5;i++)
 {
   for(j=0;j<5-i-1;j++)
     { k=strcmp(s[j],s[j+1]);
         if(k==1)
              {  strcpy(temp,s[j]);
                  strcpy(s[j],s[j+1]);
                    strcpy(s[j+1],temp);

                 }
      }
  }

      

printf("Entered string.....\n");
for(i=0;i<5;i++)
printf("%s\n",s[i]);


}







