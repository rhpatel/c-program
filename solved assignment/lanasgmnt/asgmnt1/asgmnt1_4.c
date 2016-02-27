#include<stdio.h>
main()

{
int a,b,c,d,e,total;
float avg,per;

printf("Enter the five subject Marks (MAX=50)");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
total=(a+b+c+d+e);
avg=total/5;
per=total*100/250;

printf("Average=%f\n Percentage=%f\n",avg,per);







}
