#include<stdio.h>
int my_strcmp(char *,char *);
main()
{
char s1[15],s2[15];
int i,c;
printf("Enter the first string..\n");
scanf("%s",s1);
printf("Enter the second string..\n");
scanf("%s",s2);

/*
for(i=0;s1[i];i++)
{
  if(s1[i]!=s2[i])
     break;
}
if(s1[i]==s2[i])
printf("String is equal\n");
else
printf("Not Equal\n");
*/
c=my_strcmp(s1,s2);

if(c==0)
printf("String is Equal\n");
else if(c==1)
printf("First is greater\n");
else
printf("Scond is Greater\n");

}

int my_strcmp(char *p,char *q)
{
  if(*p&&(*p==*q))
   return(my_strcmp(p+1,q+1));
  else if(*p==*q)
     return 0;
  else if(*p>*q)
    return(1);
   else
     return(-1);
}  
  




   



    
       











