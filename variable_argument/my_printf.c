//design myprintf....

#include<stdio.h>
#include<stdarg.h>
void my_printf(char *,...);
main()
{
int i=10;
char ch='a';
float f=22.5;
my_printf("i=%d,ch=%c,f=%f\n",i,ch,f);
}

void my_printf(char *s,...)
{
int i;
va_list v;
va_start(v,s);

for(i=0;s[i];i++)
{
  if(s[i]=='%')
    {
      i++;
     if(s[i]=='d')
       printf("%d",va_arg(v,int));
     else if(s[i]=='c')
      printf("%c",va_arg(v,int));
     else  if(s[i]=='f')
     printf("%f",va_arg(v,double));
   }
 else
 printf("%c",s[i]);
}
}











