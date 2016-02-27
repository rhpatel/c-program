#include<stdio.h>
main()
{

char ch[]={'a','b','a','c','b','c','d','e','f','f','f','a'};
int i,j,k,ele;
ele=sizeof(ch)/sizeof(ch[0]);
for(i=0;i<ele;i++)
  {
    for(j=i+1;j<ele;j++)
        { 
          if(ch[i]==ch[j])
             {
                for(k=j;k<ele;k++)
                    {
                      ch[k]=ch[k+1];
                     } 
                      ele--;
                      j=j-1;
               }
           }
     } 
      
for(i=0;i<ele;i++)
printf("%c ",ch[i]);
}                
