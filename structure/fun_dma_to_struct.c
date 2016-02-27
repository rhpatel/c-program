#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct A
{
int rollno;
char s[10];
float marks;
}B;
B* call(void);
void call1(B**);
B s2={33,"zxcv",55.5};
main()
{
B *p;
p=call();

p->rollno=11;
strcpy(p->s,"abcd");
p->marks=22.5;

printf("%d %s %f\n",p->rollno,p->s,p->marks);

call1(&p);
printf("%d %s %f\n",p->rollno,p->s,p->marks);

}

B* call(void)
{
B *p;
p=malloc(sizeof(B));
//p={1,"abc",22.5};
return(p);
}
void call1(B **q)
{
*q=malloc(sizeof(B));
*q=&s2;

}




