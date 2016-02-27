#include<stdio.h>
static int *p;
void push(int);
void pop(void);
main()
{
int s[10],i,j,k,c,num,ele;
ele=sizeof(s)/sizeof(s[0]);
printf("Stack start from %p\n",s);
printf("stack ends at %p\n",s+9);
p=&s;
p=p+10;

printf("stack p=%p\n",p);

abc:printf("\nEnter you want....\n1) push \n2)pop \n3)view stack\n4)Exit");
   scanf("%d",&c);
switch(c)
{
case 1:
   printf("Enter the Value\n");
   scanf("%d",&num);
   push(num);
goto abc;
break;
case 2:
pop();
goto abc;
break;
case 3:
goto def;
break;
case 4:
printf("Thanks\n");
return;
}
def:
printf("////////////////////STACK/////////////////\n");
for(i=0;i<=9;i++)
printf("ADD%p| %d |\n",&s[i],s[i]);
goto abc;
}

void push(int i)
{
*--p=i;
}

void pop()
{
printf("%d removed from stack",*p);
*p=0;
p++;
}
