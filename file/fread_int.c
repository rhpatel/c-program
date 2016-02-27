#include<stdio.h>
main()
{
int i[2]={10,20},k[2],n;
FILE *fp;
fp=fopen("data_fread","r+");

fwrite(i,4,2,fp);

rewind(fp);


fread(k,4,2,fp);

for(n=0;n<2;n++)
printf("%d ",k[n]);

}



