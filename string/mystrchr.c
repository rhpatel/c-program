#include<stdio.h>
//char * my_strchr(char *,char);
char * my_strnchr(char *,char);
main()
{
char s[10],ch,*c;
printf("starting address of s=%p\n",s);
printf("Enter the string\n");
scanf("%s",s);
printf("Enter the character\n");
scanf(" %c",&ch);

//c=my_strchr(s,ch);
c=my_strnchr(s,ch);
if(c==0)
printf("Character not found\n");
else
printf("Character is found at address %p\n",c);
}

char *my_strnchr(char *p,char ch)
//char * my_strchr(char *p,char ch)
{static char *m=0;
/*
int i;
for(i=0;p[i];i++)
if(p[i]==ch)     
return p+i;
return 0;
*/
if(*p)
{
if(*p==ch)
//return p   //for strchr
m=p;       ////forstrnchr

else 
return(my_strnchr(p+1,ch));
//my_strchr     //for strchr
}
else
return m;
//return 0;   //for my_strchr
}


