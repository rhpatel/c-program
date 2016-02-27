#include<stdio.h>
void ary(char*,char*);
main()
{
char a[5]={'a','b','c','d','e'},*p,*q;
int ele,i;
ele=sizeof(a)/sizeof(a[0]);
p=a;
q=p+(ele-1);
ary(p,q);
for(i=0;i<ele;i++)
printf("%c ",a[i]);
}

void ary(char*p,char*q)
{
 if(p<q)
  {char temp;
     temp=*p;
     *p=*q;
      *q=temp;
      ary(p+1,q-1);
  }
else
   return;
}


