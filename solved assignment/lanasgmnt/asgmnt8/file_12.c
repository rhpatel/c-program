// Program to implement wc command.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc, char **argv)
{
if(argc!=2)
{
printf("usage ./a.out fname\n");
return;
}
FILE *fp;
int l=0,c=0,w=0;
char ch,temp;
fp=fopen(argv[1],"r");

if(fp==0)
{
printf("No such file present\n");
return;
}

while((ch=fgetc(fp))!=EOF)
{c++;
 if(ch=='\n')
    l++;
}
rewind(fp);
while(fscanf(fp,"%s",&temp)!=EOF)
w++;

printf("line =%d Word=%d size=%d f_name=%s",l,w,c,argv[1]);
}


  



