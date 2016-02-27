#include<stdio.h>
main()
{
int a[]={0,3,1,0,5,1,2,0,4,5},b[10],i,j,k=0,ele,c;
ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
 { // printf("%d ",a[i]);
c=0;
   for(j=0;j<ele;j++)
    {  
      if(a[i]==a[j])
          c++;
    }
      if(c==1)
        b[k++]=a[i];
     
  }
 
for(i=0;i<k;i++)
 printf("%d ",b[i]);

}     


 

