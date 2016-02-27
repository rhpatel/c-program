#include<stdio.h>
main()
{
int marks;
printf("Enter the marks\n");
scanf("%d",&marks);


if(marks>=0 && marks<=100)
{
if(marks>=75)
printf("A Grade\n");
else if(marks>=50)
printf("B Grade\n");
else if(marks>=50)
printf("C grade\n");
else
printf("Fail\n");
}
else
printf("Enter proper marks\n");
}


