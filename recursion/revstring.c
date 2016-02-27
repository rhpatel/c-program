#include<stdio.h>
#include<string.h>
void ary(char*,char*);
main()
{
char a[10]="abcdefg",*p,*q;
int ele,i;
ele=sizeof(a)/sizeof(a[0]);
p=a;
q=p+strlen(a)-1;
ary(p,q);
for(i=0;a[i];i++)
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


