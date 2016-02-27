#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char** argv)
{
	FILE *fp;
	char a[20];
	if(argc!=3)
	{
		printf("usage: ./a.out pattern fname\n");
		return;
	}

	fp=fopen(argv[2],"r");

	if(fp==0)
	{
		printf("No such a file\n");
		return;
	}

	while(fgets(a,50,fp))
		if(strstr(a,argv[1]))
				printf("%s",a);


}








