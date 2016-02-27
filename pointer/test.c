#include<stdio.h>
main()
{
int i=10,j=20;
int *p;
char ch,*c;
float f,*fp;
p=&i;
c=&i;
fp=&i;

printf("i=%u\n",&i);

printf("p=%u\n",p);
//printf("%d\n",sizeof(p));
printf("p+1=%u\n",p+1);
printf("&p=%u\n",&p);
printf("&p+1=%u\n",&p+1);
printf("c=%u\n",c);
printf("c+1=%u\n",c+1);
printf("&c=%u\n",&c);
printf("&c+1=%u\n",&c+1);
printf("fp=%u\n",fp);
printf("fp+1=%u\n",fp+1);
printf("&fp=%u\n",&fp);
printf("&fp+1=%u\n",&fp+1);

}





