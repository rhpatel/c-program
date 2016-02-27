#include<stdio.h>
//int my_strcmp(char *,char *);
int my_strncmp(char *,char *,int);
main()
{
char s1[10],s2[10];
int c,n;
printf("Enter the first string\n");
scanf("%s",s1);
printf("Enter the second string\n");
scanf("%s",s2);
printf("Enter the n character\n");   //for strncmp
scanf("%d",&n);
//c=my_strcmp(s1,s2);
c=my_strncmp(s1,s2,n);
if(c==0)
printf("Equal\n");
else if(c==1)
printf("s1>s2");
else
printf("s2>s1");
}

//int my_strcmp(char *p,char *q)
int my_strncmp(char *p,char *q,int n)
{
/*
for(;*p;p++,q++)
{if(*p!=*q)
  break;
}
if(*p==*q)
return 0;
else if(*p>*q)
return 1;
else
return -1;
*/

//if (*p && *p==*q)
if(--n &&*p==*q)
return(my_strncmp(p+1,q+1,n));
else if(*p==*q)
return 0;
else if(*p>*q)
return 1;
else
return -1;


} 





