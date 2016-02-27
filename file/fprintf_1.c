#include<stdio.h>
main()
{
FILE *fp;
int i[5]={1,2,3,4,5},s=5;

//printf("Enter the value of i\n");
//scanf("%d",&i);

fp=fopen("data2","w+");

while(s)
{
fprintf(fp,"%d ",i[5-s]);
s--;
}
}

