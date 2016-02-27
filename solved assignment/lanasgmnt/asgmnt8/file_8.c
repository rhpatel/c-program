#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char** argv)
{

	FILE *fp,*fd,*fn;
	char ch,*p;
	int l=0,size;
	fp=fopen(argv[1],"r");
	if(fp==0)
        {
          printf("usage: ./a.out fname Word rep_word\n");
          return;
        }
        while((ch=fgetc(fp))!=EOF)
	{ if(ch=='\n')
		l++;
	}
	size=ftell(fp);
	printf("size=%d line=%d",size,l);
	p=malloc(size);
	rewind(fp);
	fn=fopen("data2","w");

	while((fgets(p,size,fp)))
	{  
		fd=fopen("data1","w+");
		fputs(p,fd);
		rewind(fd);

		while(fscanf(fd,"%s",p)!=EOF)


		{ if((strcmp(p,argv[2])==0))
			strcpy(p,argv[3]);       
			fprintf(fn,"%s ",p);
		}
		fprintf(fn,"%c",'\n');

	}       
}    




