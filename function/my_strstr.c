#include<stdio.h>
int  my_strstr(const char *,const char*);
main()
{
char m[10],s[10];
int c;
printf("Enter teh main string\n");
scanf("%s",m);
printf("Enter the sustring\n");
scanf("%s",s);
c=my_strstr(m,s);

if(c==0)
printf("No substring Present\n");
else
printf("String Present for %d times\n",c);
}

int my_strstr(const char *p,const char *q)
{
int i,j,c=0;
for(i=0;p[i];i++)
{
if(p[i]==q[0])
{
for(j=1;q[j];j++)
if(q[j]!=p[i+j])
   break;
 
if(q[j]=='\0')
     c++;
}
}
return c;
}




