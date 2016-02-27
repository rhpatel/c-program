#include<stdio.h>
static int sum=0,pro=1;
void fun(int *,int);
main()
{
int a[10],i,j,k,ele;
printf("Enter the element of an array");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
ele=sizeof(a)/sizeof(a[0]);
// using simple pgm
/*
for(i=0;i<10;i++)
{ if(a[i]%2==0)
   sum=sum+a[i];
  else
   pro=pro*a[i];
}

*/
//  using function;
fun(a,ele);

printf("sum=%d\n Product=%d\n",sum,pro);

}

/*
 void fun(int *p,int n)  //function Definition
{
   int i;
   for(i=0;i<n;i++)
   { 
     if(p[i]%2==0)
       sum=sum+p[i];
     else
       pro=pro*p[i];
    }
}   
  */
//using recursion
  
void fun(int *p,int n)
 {
  static int c=0;
   if(c<n)
    {
      if(*p%2==0)
        { printf("%d\n",*p);
         sum=sum+(*p);
        }
      else
         pro=pro*(*p);
       c++;
       fun(p+1,n);
    }  
 }





 




