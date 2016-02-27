#include<stdio.h>
main()
{
char i,j,ch='E';
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)

{
printf("%c",ch+j-1);

}
ch--;
printf("\n");
}



}
