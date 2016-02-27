#include<stdio.h>
main()
{
int i,j,ele,temp,pos;
char ch,a[10]={'b','c','d','e','f'};
ele=sizeof(a)/sizeof(a[0]);
//printf("Enter the array\n");


//for(i=0;i<ele;i++)
//scanf("%d",&a[i]);

printf("Enter the position\n");
scanf("%d",&pos);

printf("Enter the character\n");
scanf(" %c",&ch);

for(i=ele-1;i>pos;i--)
a[i]=a[i-1];


a[i]=ch;


for(i=0;i<ele;i++)
printf("%c ",a[i]);
}





