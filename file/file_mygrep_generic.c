#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char** argv)
{
	FILE *fp;
	char *p;
        int i=0,c=0;
	if(argc!=3 && argc!=4)
	{
		printf("usage: ./a.out pattern fname\n");
		return;
	}

   if(argc==3)
{
	fp=fopen(argv[2],"r");
        if(fp==0)
	{
		printf("No such a file\n");
		return;
	}

              while(fgetc(fp)!=EOF)
                    i++;
        
              p=malloc(i);
   
              rewind(fp);
 
        	while(fgets(p,i,fp))
                if(strstr(p,argv[1]))
		printf("%s",p);
                
}

  if(argc==4 && argv[1][0]=='-' && argv[1][1]=='n')

{
	fp=fopen(argv[3],"r");
        if(fp==0)
	{
		printf("No such a file\n");
		return;
	}

              while(fgetc(fp)!=EOF)
                    i++;
        
              p=malloc(i);
   
              rewind(fp);
 
        	while(fgets(p,i,fp))
                {c++;
	   	if(strstr(p,argv[2]))
				printf("%d %s",c,p);
                }
} 
 else
 {
 printf("Enter proper option");
 }  
}





