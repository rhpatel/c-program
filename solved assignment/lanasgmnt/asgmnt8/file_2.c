// 2) Program to remove a Specific line from the given text file.

#include<stdio.h>
#include<stdlib.h>

main(int argc, char**argv)
{

	if(argc!=3)
	{
		printf("Usage ./a.out fname line_no");
		return;
	}

	int size,l=0;
	FILE *fp,*fd;
	char ch,*cp;
	fp=fopen(argv[1],"a");   // to finding the size of file;
	if(fp==0)
	{
		printf("No such file present..\n");
		return;
	}
/*nt m;
	m=atoi(argv[2]);
	printf("%d",m);
*/
	size=ftell(fp);
	fclose(fp);
	printf("Sizeof file=%d\n",size);

	fp=fopen(argv[1],"r");
	fd=fopen("data_2_op","w");

	cp=malloc(size);  //      create buffer dynamically to store string
	while(fgets(cp,size,fp))
	{ l++;
		if(l==atoi(argv[2])) 
			continue;
		fputs(cp,fd);
//		puts(cp);
	}
}









