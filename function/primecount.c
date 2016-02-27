#include<stdio.h>
int primecount(int *,int);
main()
{
int a[]={5,7,9,11,15,18,20},ele,c;
ele=sizeof(a)/sizeof(a[0]);
c=primecount(a,ele);
printf("prime number=%d",c);
}

int primecount(int *p,int c)
{
int i,j,count=0;
for(i=0;i<c;i++)
{ 
//printf("%d",p[i]);
   for(j=2;j<p[i];j++)
     { 
	     if(p[i]%j==0)
         break;
}
       if(p[i]==j)
         count++;
      
}
return count;
}

