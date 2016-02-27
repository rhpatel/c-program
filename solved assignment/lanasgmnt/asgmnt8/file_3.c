// 3)Program to replace a Specified line in a given file.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc, char **argv)
{
	int size,l=0,i;
	char **p,ch;

	if(argc!=4)
	{
		printf("usage : ./a.out fname ""string""line_no\n");
		return;
	}
	FILE *fp;

	fp=fopen(argv[1],"r");
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
			l++;
	}
	size=ftell(fp);
	rewind(fp);
                                         //printf("size=%d line=%d",size,l);

	p=malloc(sizeof(fp)*l);

	for(i=0;i<l;i++)
		p[i]=malloc(size+1);
           
       i=0;
      while(fgets(p[i],size,fp))
          { if((i+1)==atoi(argv[3]))
              { p[i]=argv[2];
                 strcat(p[i],"\n");
              }
                 i++;
          }
                 
   fclose(fp);
  fp=fopen(argv[1],"w");         
   for(i=0;i<l;i++)
     fputs(p[i],fp);
    //puts(p[i]);


}


