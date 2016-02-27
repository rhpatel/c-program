//  pointer to an aray...

#include<stdio.h>
main()
{
int i;

char s[][10]={"ABCD","EFGH","IJKL","MNOP"};
char (*p)[10];
p=s;

//printf("%u %u %u %u",p,*p,p+1,*p+1);


for(i=0;i<4;i++)
{ 
   scanf("%s",p[i]); 
}

p=s;

for(i=0;i<4;i++)
{ 
  printf("%s ",p[i]); 
}

}

