#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fs,*fd;
int c=0;
	if(argc!=3)
	{
		printf("usage: ./a.out df sf\n");
		return;
	}
	//printf("%s",argv[2]);

	char ch;
	fs=fopen(argv[1],"r");
	fd=fopen(argv[2],"w+");
	while((ch=fgetc(fs))!=EOF)
	{
		if(ch<='Z' && ch>='A')
			ch=ch+32;
		fputc(ch,fd);

	}

	rewind(fd);
	printf("\n");
	while((ch=fgetc(fd))!=EOF)
	 {c++;
	printf("%c",ch);
          }

printf("\nsize of file=%d\n",c);

}












