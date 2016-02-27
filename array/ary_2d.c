#include<stdio.h>
main()
{
int a[2][3]={{1,2,3},{4,5,6}},i,j,r,c,(*p)[3];
p=a;
r=sizeof(a)/sizeof(a[0]);
c=sizeof(a[0])/sizeof(a[0][0]);

//printf("%u %u %u",a,p,p+1);

for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
  printf("%d ",*(*p+j));
p++;
}

}

