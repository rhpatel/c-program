#include<stdio.h>
main()
{
int i,j,num=5;
char ch='E';
for(i=1;i<=num;i++)
{
for(j=num;j>=i;j--)
{
printf("%c ",ch-(num-j));
}
ch--;
printf("\n");
}}
