#include<stdio.h>
main()
{
int i,j,pos,ele;
char a[6]={'a','b','d','e','f'},ch;
ele=sizeof(a)/sizeof(a[0]);
//printf("Enter the element...\n");
//for(i=0;i<ele;i++)
//scanf("%c",&a[i]);

printf("Enter the position you want to insert\n");
scanf("%d",&pos);

printf("Enter the number you want to insert\n");
scanf(" %c",&ch);

for(i=ele;i>=pos;i--)
a[i]=a[i-1];


a[pos]=ch;

for(i=0;i<ele;i++)
printf("%c ",a[i]);
}

