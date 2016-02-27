#include<stdio.h>
main()
{

int a[10],p=0,e=0,i;
printf("Enter the array\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);

for(i=0;i<10;i++)
{
  if(a[i]%2==0)
     e++;
  if(a[i]>=0)
    p++;
}
 printf("even=%d\nodd=%d\nPositive=%d\nNegative=%d\n",e,10-e,p,10-p);
}  


