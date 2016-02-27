#include<stdio.h>
#include<stdlib.h>
main(int argc, char **argv)
{
	int i,j,c=0;
	FILE *fp;
	char ch;
	if(argc!=3)
	{
		printf("usage: ./a.out fname char");
		return;
	}

	fp=fopen(argv[1],"r");

	if(fp==0)
	{
		printf("No file present...\n");
		return;
	}

	while((ch=fgetc(fp))!=EOF)
		if(ch==argv[2][0])
			c++;

	printf("count=%d\n",c);
}  









