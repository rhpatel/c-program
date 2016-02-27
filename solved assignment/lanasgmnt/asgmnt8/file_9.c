// Program to reverse the Contents of a given file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char**argv)
{
if(argc!=2)
{
printf("Usage: ./a.out fname \n");
return;
}

FILE *fp,*fd;
int size;
char ch;
fp=fopen(argv[1],"a");
if(fp==0)
{
printf("No such File is present\n");
}
size=ftell(fp);
fclose(fp);
fd=fopen("data_9_op","w");
fp=fopen(argv[1],"r");
fseek(fp,size-2,SEEK_CUR);

while(size--)
{
ch=fgetc(fp);
printf("%c",ch);
fseek(fp,-2,SEEK_CUR);
fputc(ch,fd);
}
}






