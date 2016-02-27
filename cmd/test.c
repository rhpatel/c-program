#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(char argc,char **argv)
{
int i;
char s[10];
float f1=0,f2=0,div=1,f;
strcpy(s,argv[1]);

for(i=0;s[i]!='.';i++)
{  
  f1=f1*10+(s[i]-48);
}
printf("%f\n",f1);

for(i=i+1;s[i];i++)
{
 f2=f2*10+(s[i]-48);
div=div*10;
}
f2=f2/div;
printf("%f\n",f2);
f=f1+f2;
printf("f=%f\n",f);

}
