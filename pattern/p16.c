#include<stdio.h>
main()
{
int i,j,k,m,num,p;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
   printf("%d",i);
   m=i;
      for(j=1,k=num-1;j<i;j++,k--)
      {
       m=m+k;
       printf("%d",m);
      }
printf("\n");
}
}
