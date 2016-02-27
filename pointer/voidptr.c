#include<stdio.h>
main()
{
int i=10;
char ch='a';
float f=23.5;
void *p;

p=&i;


printf("%d\n",*(int*)p);

p=&ch;
printf("%c\n",*(char*)p);

p=&f;
printf("%f\n",*(float*)p);

}

