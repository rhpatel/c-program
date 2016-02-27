#include<stdio.h>
#include<string.h>
void rev(char *,char *);
main()
{
int i,j;
char s[10],temp;
printf("Enter the string");
scanf(" %s",s);
char *p=s;
char *q=p+strlen(s)-1;
rev(p,q);
printf("%s\n",s);
/*
for(i=0;s[i];i++);
for(i=i-1,j=0;i>j;i--,j++)
   {
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
}
printf("%s\n",s);
*/
}

void rev(char *p,char *q)
{char temp;

if(p<q)
{  temp=*p;
   *p=*q;
    *q=temp;
    rev(p+1,q-1);
}

}








