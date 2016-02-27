// WAP to implement logical swap.....


#include<stdio.h>
void logicswap(int **,int);
main()
{
int a[5]={11,2,34,4,2},i,j,*p[5],*temp;

for(i=0;i<5;i++)
p[i]=a+i;


/*
for(i=0;i<5-1;i++)
 {
  for(j=0;j<5-i-1;j++)
    {
      if(*p[j]>*p[j+1])
        { 
           printf("%d %d\n",*p[j],*p[j+1]); 
           temp=p[j];
          p[j]=p[j+1];
          p[j+1]=temp;
        }  
     }
 }
 */
logicswap(p,5);
        
for(i=0;i<5;i++)
printf("%d ",a[i]);

printf("\n");

for(i=0;i<5;i++)
 printf("%d ",*p[i]);
}

    
void logicswap(int **p,int n)
{
int *temp,i,j;
for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
    {
      if(*p[j]<*p[j+1])
        { 
           printf("%d %d\n",*p[j],*p[j+1]); 
           temp=p[j];
          p[j]=p[j+1];
          p[j+1]=temp;
        }  
     }
 }
 }








