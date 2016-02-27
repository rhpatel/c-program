#include<stdio.h>
#include<stdlib.h>
main()
{

FILE *fp;

int a[5],b[5],i;
printf("Enter the value of i:\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

fp=fopen("Data_fread","w");
fwrite(a,4,5,fp);

fclose(fp);

fp=fopen("Data_fread","r");

fread(b,4,5,fp);

for(i=0;i<5;i++)
printf("%d ",b[i]);

}






