#include<stdio.h>
static int i,k;
void fun(int*,int*,int);
main()
{

int a[10],b[10],ele,i;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter the element..\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

/*
//   using loop
for(i=0;i<ele;i++)
{   
  for(j=2;j<=a[i];j++)
        if(a[i]%j==0)
             break;
     if(j==a[i])
       b[k++]=a[i];
}
*/
fun(a,b,ele);

printf("count=%d\n",k);
for(i=0;i<k;i++)
printf("%d ",b[i]);
}

void fun(int *p,int*q,int ele)
{
 int j;
if(i<ele)
   {  for(j=2;j<*p;j++)
          if(*p%2==0)
           break;
          
        if(*p==j)
         {*q++=*p;
           k++;
         }
       i++;
     fun(p+1,q,ele);
    }  
}


