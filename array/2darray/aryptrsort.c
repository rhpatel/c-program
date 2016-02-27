#include<stdio.h>
main()
{

int a[5]={10,14,11,30,25};
int *p[5];
int i,j,k,*temp;

for(i=0;i<5;i++)
p[i]=(a+i);

for(i=0;i<5;i++)
{
for(j=0;j<5-i-1;j++)
   {
	if(*p[j]>*p[j+1])
		{
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
		}
   }
}
printf("///////////// POINTER ARRAY////////////////\n ");
for(i=0;i<5;i++)
printf("%d ",*p[i]);
printf("\n");
printf("//////////////// ORIGINAL ARRAY///////////\n");
for(i=0;i<5;i++)
printf("%d ",a[i]);
printf("\n");
}

