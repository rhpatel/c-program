#include<stdio.h>
#include<stdlib.h>
main(int argc, char** argv)
{
FILE *fp,*fd;
int i;
char ch;
if(argc!=3)
{
 printf("Usage: ./a.out sf df");
return;
}

fp=fopen(argv[1],"r");

if(fp==0)
{
printf("No such a source file\n");
return;
}

fd=fopen(argv[2],"w+");

while((ch=fgetc(fp))!=EOF)
fputc(ch,fd);


rewind(fd);

while((ch=fgetc(fd))!=EOF)
printf("%c",ch);

}









