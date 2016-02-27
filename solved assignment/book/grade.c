#include<stdio.h>
main()
{
int m;
printf("Enter the marks");
scanf("%d",&m);
//nesed if

if(m<=100 && m>0)
{
if(m>50)
{if (m>75)
printf("A");
else
printf("B");
}
if(m<50)
{if(m>35)
printf("C");
else
printf("FAIL");
}}

else("Enter proper marks\n");
}
