#include<stdio.h>
main()
{
FILE *fp;
int a[5],i;
fp=fopen("data2","r");

for(i=0;i<5;i++)
{
fscanf(fp,"%d",&a[i]);

}

for(i=0;i<5;i++)
printf("%d ",a[i]);
}
