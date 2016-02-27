#include<stdio.h>
main(int argc,char** argv)
{
	FILE *fp;
        char ch;
	if(argc!=4)
	{
		printf("Usage: ./a.out fname char replace_char\n");
		return;
	}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("No such file\n");
		return;
	}

	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==argv[2][0])
		{
			fseek(fp,-1,SEEK_CUR);
			fputc(argv[3][0],fp);
		}
	} 

}


