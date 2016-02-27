//passing 2d array to the pointer to an array
#include<stdio.h>
void print(int (*)[],int, int);
main()
{
int a[3][4]={ 
              {1,2,3,4},
		{5,6,7,8},
                  {8,10,11,12}
                              },r,c,i,j;

r=sizeof(a)/sizeof(a[0]);
c=sizeof(a[0])/sizeof(a[0][0]);
 
print(a,r,c);
}

void print(int (*p)[4],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
    printf("%d ",p[i][j]);
  printf("\n");


}
}





