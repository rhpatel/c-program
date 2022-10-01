#include<stdio.h>
int main()
{
int b[2][3]={
             {1,2,3},
             {4,5,6}
            };
int i,j,r,c,*p;
r=sizeof(b)/sizeof(b[0]);
c=sizeof(b[0])/sizeof(b[0][0]);
printf("rows=%d\ncols=%d\n",r,c);

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d ",b[i][j]);

printf("\n");
}
return 0;
}










/*
printf("*b=%u\n",*b);
printf("b+1=%u\n",b+1);
printf("b[1]=%u\n",b[1]);
printf("b[1][0]=%u\n",b[1][0]);
printf("*(b+1)=%u\n",*(b+1));
printf("*b[1]=%u\n",*b[1]);
printf("&b[1][0]=%u\n",&b[1][0]);
printf("**(b+1))=%u\n",**(b+1));
printf("&b+1=%u\n",&b+1);
*/












