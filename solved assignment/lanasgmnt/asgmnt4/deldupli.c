#include<stdio.h>
main()
{
char a[12]={'A','B','B','B','C','A','C','D','B','E','A','F'},ch,num;
int i,j,k,ele;

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
  {



      for(j=i+1;j<ele;)
          {
                   


			 if(a[i]==a[j])
                      		{
 	                      for(k=j;k<ele;k++)
                                a[k]=a[k+1];
                                ele--;
  }
                         else
                          j++;
                        
              }
      
        }

  


for(i=0;i<ele;i++)
printf("%c ",a[i]);
}






