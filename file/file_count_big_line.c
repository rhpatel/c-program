//count bigger line length
#include<stdio.h>
#include<stdlib.h>

main(int argc, char ** argv)
{
FILE *fp;
int max=0,i=0,j;
char *p;
if(argc!=2)
{
printf("usage: ./a.out fname\n");
return;
}

fp=fopen(argv[1],"r");

if(fp==0)
{
printf("No such file present..\n");
return;
}

while(fgetc(fp)!=EOF)
i++;

rewind(fp);
p=malloc(i+1);

while(fgets(p,i,fp))
{
for(j=0;p[j];j++);
    if(j>max)
      max=j-1;
   
 j=0;
}
 printf("max char=%d\n",max);
}      
 





