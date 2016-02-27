// convert string to an integer.......(without atoi);

#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
int i,j,op=0;
char s[10];
if(argc <2)
{
printf("Enter proper argument\n");
return;
}

strcpy(s,argv[1]);

for(i=0;s[i];i++)
 {
  if(s[i]>='0'&& s[i]<='9')
  {
    op=op*10+s[i]-48;
  }
 else
   continue;
}

printf("%d\n",op);
}

















