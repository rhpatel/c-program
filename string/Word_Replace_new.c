#include<stdio.h>
#include<string.h>
main()
{

char s1[25],s2[10],s3[10],*p;
int i,j,k,m,n,s;
printf("Enter the sentence\n");
gets(s1);
printf("Enter the word you want to replace\n");
scanf("%s",s2);
printf("Enter the word you want to replace with\n");
scanf("%s",s3);

for(i=0;s1[i];i++)    ///////////search the word
  {
    if(s1[i]==s3[0])
       {  p=&s1[i];
           k=i;
              for(j=1;s3[j];j++)
                {
                  if(s1[i+j]!=s3[j])
                         break;
                }
                 if(s3[i+j]='\0') 
                  break;
   }}

m=strlen(s3);                 
for(k=k;s1[k];k++)    ///////////delete word
 {  
 s1[k]=s1[k+m];  
 }

n=strlen(s2);        //////////shift to insert word              
for(i=0;s1[i];i++);

for(i=i;&s1[i]!=p;i--)
  {s1[i+n]=s1[i];}
  s1[i+n]=s1[i];

for(i=0;s2[i];i++)    ///////////insert word
  *p++=s2[i];
puts(s1);
}








 
