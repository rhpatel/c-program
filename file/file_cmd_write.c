#include<stdio.h>
#include<stdlib.h>
main(int argc,char**argv)
{
	FILE *fp;
	char ch,a[20],*cp;
        int i,j,size;
	if(argc!=2)
	{
		printf("usage :  ./a.out fname\n");
		return;
	}

	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("No file present..\n");
		printf("Want to create file\n1)Yes\n2)No\n");
		scanf(" %d",&i);
			switch (i)
			{
				case 1:
					fp=fopen(argv[1],"w");
					break;
				case 2:
					return;
			}
                printf("Enter the size of file");
                scanf("%d",&size);

                cp=malloc(sizeof(char)*size);

		printf("write inside file...\n");
                 for(i=0;i<size;i++)
                  {
                 scanf("%c",&cp[i]);
                 if(cp[i]=='!')
                   break;
                  }
                   a[i]='\0';

                  for(i=0;cp[i];i++)
                  fputc(cp[i],fp);
		}
printf("File is present...\n");

while((ch=fgetc(fp))!=EOF)
	printf("%c",ch);
	}



















