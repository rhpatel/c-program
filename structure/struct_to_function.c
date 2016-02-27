#include<stdio.h>
#include<stdlib.h>
typedef struct A
{
 int rollnum;
 char ch[10];
 float marks;
}B;

void print(int,char[10],float);
void print1(B);
void print2(B*);            


main()
{
B a1={10,"abc",22.5},*p;
p=malloc(sizeof(B));
print(a1.rollnum,a1.ch,a1.marks);
print1(a1);
print2(&a1);
}

void print(int i,char s[10],float f)
{
printf("%d %s %f\n",i,s,f);
}

void print1(B a1)
{
printf("%d %s %f\n",a1.rollnum,a1.ch,a1.marks);
}

void print2(B *p)
{
printf("%d %s %f\n",p->rollnum,p->ch,p->marks);
}


