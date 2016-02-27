#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
if(argc!=3)
{
printf("usage: ./a.out fname_1 fname_2\n");
return;
}

FILE *fp1,*fp2,*fd;
int size1=0,size2=0,l1=0,l2=0,l=0,size=0,i,j;
char ch1,ch2,**p1,**p2;

fp1=fopen(argv[1],"r");
fp2=fopen(argv[2],"r");

while((ch1=fgetc(fp1))!=EOF)    // size and length of file 1
{
 if(ch1=='\n')
   l1++;
}
size1=ftell(fp1);

while((ch2=fgetc(fp2))!=EOF)    // size and length of file 2
{
 if(ch2=='\n')
   l2++;
}
size2=ftell(fp2);

if(size2>size1)
size=size2;
else 
size=size1;

if(l2>l1)
l=l2;
else 
l=l1;
rewind(fp1);
rewind(fp2);
//printf("size=%d size1=%d size2=%d l=%d l1=%d l2=%d\n",size,size1,size2,l,l1,l2);

p1=malloc(sizeof(fp1)*l);
for(i=0;i<l;i++)
p1[i]=malloc(size);

p2=malloc(sizeof(fp2)*l);
for(i=0;i<l;i++)
p2[i]=malloc(size);
i=0;
while(fgets(p1[i++],size,fp1));

i=0;
while(fgets(p2[i++],size,fp2));
fd=fopen("data_5_op","w");
for(i=0;i<l;i++)
{
j=strlen(p1[i]);
p1[i][j-1]=' ';
strcat(p1[i],p2[i]);
fputs(p1[i],fd);
}


}






