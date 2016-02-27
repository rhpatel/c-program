//4) Program to Capitalize First Letter of every Word in a file.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char** argv)
{

if(argc!=2)
{
printf("Usage : ./a.out fname.\n");
return;
}

FILE *fp;
char *ch;
int size;
fp=fopen(argv[1],"a");
if(fp==0)
{
printf("No such file present..\n");
return;
}
size=ftell(fp);
fclose(fp);
fp=fopen(argv[1],"r+");
printf("%d",size);
ch=malloc(size);

while((fscanf(fp,"%s",ch))!=EOF)
{ if(ch[0]>='a' && ch[0]<='z')
  {  ch[0]=ch[0]-32;
    fseek(fp,-strlen(ch),SEEK_CUR);
     fputs(ch,fp);
  }

}
}












