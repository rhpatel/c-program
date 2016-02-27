//prime using Recursion from an array;
#include<stdio.h>
int primei(int);
main()
{
int a[10],b[10],i,j=0,k,c,ele;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter the array \n");

for(i=0;i<ele;i++)
{
scanf("%d",&a[i]);
}



for(i=0;i<ele;i++)
{
c=primei(a[i]);
if(c!=0)
 b[j++]=a[i];
}


printf("\n");

for(k=0;k<j;k++)
printf("%d ",b[k]);
printf("\n");

}

int primei(int num)
{
static j=2;
//printf("%d\t",j);
if(j<num)
{
 if (num%j==0)  
     { j=2;
     return 0;
     }
   j++;
  primei(num);
}
else
 {
   j=2;
   return num;
 }
}
















