#include<stdio.h>
main()
{
int a[]={10,2,4,5,2,1,3,4,6,5,8,9,2},i,j,k,l=0,n,count,ele;
int b[15],c[10];
ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
{
 b[i]=a[i];
}


for(i=0;i<ele;i++)
    {
       count=1;
      for(j=i+1;j<ele;j++)
           {
             if(b[i]==b[j])
                 { count++;      
                     for(k=j;k<ele;k++)
                           {
                             b[k]=b[k+1];
                           }
                       j=j-1;
                       ele=ele-1;
                 }
             }
    
         if(count>1)
         {
          for(n=0;n<count-1;n++)
             c[l++]=a[i];
         }
    }    
            
for(i=0;i<ele;i++)
   printf("%d ",b[i]);
printf("\n");
for(i=0;i<l;i++)
printf("%d ",c[i]);
}
