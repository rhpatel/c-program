#include<stdio.h>
#include<stdlib.h>

main(int argc,char** argv)
{
	FILE *fp;
	int i,c=0;
	char *p,ch;
	if(argc!=4)
	{
		printf("Usage ./a.out fname char re_char\n");
		return;
	}


	fp=fopen(argv[1],"r+");

	if(fp==0)
	{
		printf("File is not present..\n");
		return;
	}

	while(fgetc(fp)!=EOF)
		c++;
	rewind(fp);

	p=malloc(c+1);

i=0;     
while((ch=fgetc(fp))!=EOF)
		p[i++]=ch;
             	p[i]='\0';
   

rewind(fp);

for(i=0;p[i];i++)
if(p[i]==argv[2][0])
p[i]=argv[3][0];

puts(p);

//for(i=0;p[i];i++)
//fputc(p[i],fp);
fputs(&p[i],fp);

}




































