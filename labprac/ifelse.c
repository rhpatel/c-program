#include<stdio.h>
main()
{
int m;
printf("Enter the Marks in between 0 to 100\n");
scanf("%d",&m);
if(m<0 || m>100)
{
printf("Enter the proper Marks\n");
printf("Fail\n");
}
else if (m<35)
printf("Fail\n");
else if(m<40)
printf("C Grade\n");
else if (m<55)
printf("B Grade\n");
else if(m<70)
printf("A Grade\n");
else 
printf("A+ Grade\n");

}
