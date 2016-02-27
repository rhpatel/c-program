//5  Program to meges the lines from two files and store the result into another file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char ** argv)
{

	if(argc!=3)
	{
		printf("Usage : ./a.out f1_name f2_name\n");
		return;
	}

	FILE *fp,*fd;
	int size;
	char *ch;
	fp=fopen(argv[1],"a");
	if(fp==0)
	{
		printf("No first file present\n");
		return;
	}

	size=ftell(fp);
	fclose(fp);
	fp=fopen(argv[1],"r");

	fd=fopen("data_5_op","a+");
	ch=malloc(size);

	while(fgets(ch,size,fp))
		fputs(ch,fd);

	fp=fopen(argv[2],"r");
           if(fp==0)
              {
                printf("No second file present\n");
                return;
              }
	while(fgets(ch,size,fp))
		fputs(ch,fd);

}






