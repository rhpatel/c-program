#include<stdio.h>
#include<stdlib.h>

typedef struct A
{
  int a;
  char *ch;
  float f;
}B;

main()
{
int i,j,num;
B **p;
printf("Enter the student..\n");
scanf("%d",&num);

p=calloc(num,sizeof(B*));

for(i=0;i<num;i++)
{
p[i]=calloc(1,sizeof(B));
p[i]->ch=malloc(sizeof(char)*10);
}

for(i=0;i<num;i++)
{
scanf("%d",&p[i]->a);
for(j=0;j<3;j++)
{
printf("%d\n",j);
scanf(" %c",&p[i]->ch[j]);
}
}

for(i=0;i<num;i++)
{
printf("%d",p[i]->a);
for(j=0;j<3;j++)
printf(" %c",p[i]->ch[j]);
}

}









