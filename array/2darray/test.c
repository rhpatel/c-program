#include<stdio.h>
void print(char **,int);
main()
{
int r;
char *p[]={"BCEFGH","EFGH","IJKL","LMNO","KLMN"};

r=sizeof(p)/sizeof(p[0]);
printf("size =%d,%d %d",r,sizeof(p),sizeof(p[0]));

print(p,r);
}
void print(char **p,int r)
{
int i;
   for(i=0;i<r;i++)
    {printf("%s",p[i]);
     printf("\n");
    }

}
