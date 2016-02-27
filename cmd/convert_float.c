#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
int i,div=1;
char s[10];
float f,f1=0,f2=0;
strcpy(s,argv[1]);


for(i=0;s[i]!='.';i++)
   f1=f1*10+s[i]-48;

for(i=i+1;s[i];i++)
{
   f2=f2*10+s[i]-48;
div=div*10;
}
f2=f2/div;
f=f1+f2;
printf("%f %f %f",f1,f2,f);
}

