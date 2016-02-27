#include<stdio.h>
main()

{float ba,hra,da,gross;
printf("Enter the basic salary......\n");
scanf("%f",&ba);
da=0.40*ba;
hra=0.20*ba;
gross=ba+da+hra;
printf("DA=%f\nHRA=%f\nGross salary=%f\n",da,hra,gross);




}
