// Program to implement sort command.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
if(argc!=2)
{
printf("Usage: ./a.out fname\n");
return;
}

FILE *fp;
int i,size,l=0,j;
char **p,ch,*temp;
fp=fopen(argv[1],"r");
if(fp==0)
{
printf("No such file Present\n");
return;
}
while((ch=fgetc(fp))!=EOF)
{if(ch=='\n')
 l++;
}
size=ftell(fp);
							//printf("Size=%d line =%d",size,l);
p=malloc(sizeof(fp)*l);
for(i=0;i<l;i++)
p[i]=malloc(size);

rewind(fp);
for(i=0;i<l;i++)
{
fgets(p[i],size,fp);
//puts(p[i]);
}

for(i=0;i<l-1;i++)
 {
   for(j=0;j<l-i-1;j++)
      {
        if((strcmp(p[j],p[j+1]))==1)
          {
           temp=p[j];
           p[j]=p[j+1];
           p[j+1]=temp;
          }
        }
}

for(i=0;i<l;i++)
puts(p[i]);

}
