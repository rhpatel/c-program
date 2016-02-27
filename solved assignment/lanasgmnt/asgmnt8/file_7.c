//7 Program to copy the one file into multiple destination files which are provided during the loadtime.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc, char ** argv)
{
	if(argc<=2)
	{
		printf("usage ./a.out fname f_copy_1 f_copy_2 ...\nplease spesify Destinatio file\n");
		return;
	}

	FILE *fp,*fd;
	int i=0,size;
	char *p;
	fp=fopen(argv[1],"a");
	if(fp==0)
	{
		printf("No source file present");
		return;
	}

	size=ftell(fp);
	printf("%d",size);
	fclose(fp);
	fp=fopen(argv[1],"r");

	p=malloc(size);
	for(i=2;argv[i];i++)
	{
		fd=fopen(argv[i],"w");

		while(fgets(p,size,fp))
			fputs(p,fd);

		rewind(fp);
	}
}


 



