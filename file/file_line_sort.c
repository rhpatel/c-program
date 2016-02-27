#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	FILE *fp,*fd;
	char *p;
	int max=0,i=0,j,l=0,k;
	char **cp,*temp;
	//Open and calculate file size
	fp=fopen("data","r");
	while(fgetc(fp)!=EOF)
		i++;
//Memory allocate to store temporary line (size of p= sizeof file)
	rewind(fp);
	p=malloc(i+1);
	while(fgets(p,i,fp))                                   // find bigger line to allocate memory for 2d array...
	{l++;
		for(j=0;p[j];j++)
		{ 
			if(max<j)
				max=j;  
		}
	}
	//	printf("%d %d",l,max);
	max=max+2;
	// +2 starting from 0 and 1 for \0
	cp=malloc(sizeof(char*)*l);                                                 //num of 1d array =num of lines; 
	for(j=0;j<l;j++)

		cp[j]=malloc(sizeof(char)*max);                                   // size of 1d array =size of bigger line;
	rewind(fp);
	for(j=0;j<l;j++)                                        //Linesare copied to the 2d array......
	{
		fgets(cp[j],max,fp);
		//	printf("%d",j);
	//  puts(cp[j]);
	}
        for(j=0;j<l-1;j++)
	{
		for(k=0;k<l-j-1;k++)
		{if(strlen(cp[k])>strlen(cp[k+1]))
			{ temp=cp[k];
				cp[k]=cp[k+1];
				cp[k+1]=temp;  
			} 
		}
	}
	for(j=0;j<l;j++)
        {
         puts(cp[j]);
	}

	fp=fopen("data1","w+");
	for(j=0;j<l;j++)
		fputs(cp[j],fp);
}




























