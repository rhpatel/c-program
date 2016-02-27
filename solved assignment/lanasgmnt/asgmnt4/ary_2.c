#include<stdio.h>
static int max,min,i;
void fun(int *,int);
main()
{
int a[10],ele;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter the element of an array\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

max=a[0];
min=a[0];

for(i=0;i<ele;i++)
printf("%d ",a[i]);
/*                                 //simple loop
for(i=0;i<ele;i++)
{

 if(max<a[i])
    max=a[i];
 if(min>a[i])
    min=a[i];
}
*/
fun(a,ele);
printf("max=%d min=%d\n",max,min);
}
/*
void fun(int *p,int ele)  //using function
{
for(i=0;i<ele;i++)
{
 if(max<p[i])
    max=p[i];
 if(min>p[i])
    min=p[i];
}
}
*/
                             //using recursion
void fun(int *p,int ele)
{
 if(i<ele)
 {
  if(max<*p)
     max=*p;
   if(min>*p)
      min=*p;
     i++;
   fun(p+1,ele);
}
}










