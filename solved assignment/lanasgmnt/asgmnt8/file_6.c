//program to replace the word with the reverse of that word in a given file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc, char** argv)
{
        FILE *fp;
        char *ch,*ch1;
        int len,i,size=0;
        if(argc!=3)
        {
                printf("Usage: ./a.out fname word\n");
                return;
        }
        fp=fopen(argv[1],"r+");
        if(fp==0)
        {
                printf("No such file present..\n");
                return;
        }
        fseek(fp,0,SEEK_END);
        size=ftell(fp);
        printf("size=%d",size);
        rewind(fp);

        len=strlen(argv[2]);
        ch=malloc(len+1);

        for(i=0;argv[2][i];i++);
        for(i=i-1;i>=0;i--)
                ch[len-i-1]=argv[2][i];
        ch[len-i-1]='\0';
        puts(ch);
        ch1=malloc(size);
        while((fscanf(fp,"%s",ch1))!=EOF)
        {
                if((strcmp(argv[2],ch1))==0)
                { fseek(fp,-len,SEEK_CUR);
                        fputs(ch,fp);
                }

}
 }
