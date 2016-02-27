#include<stdio.h>
#include<stdlib.h>

main()
{
int *p,i,j;

/*
//allocate size for 5 interger

p=malloc(sizeof(int)*5);
for(i=0;i<5;i++)
scanf("%d",&p[i]);
for(i=0;i<5;i++)
printf("%d ",p[i]);

*/

/*
// allocate size for string;

char *ch;
ch=malloc(sizeof(char)*10);
scanf("%s",ch);
printf("%s\n",ch);
*/
/*

// allocate size for 2d array....
int **q;
q=malloc(sizeof(int*)*5);

for(i=0;i<5;i++)
q[i]=malloc(sizeof(int)*3);

for(i=0;i<5;i++)
{
 for(j=0;j<3;j++)
  scanf("%d",&q[i][j]);
}

for(i=0;i<5;i++)
{
 for(j=0;j<3;j++)
printf("%2d ",q[i][j]);
printf("\n");
}
*/


// allocate size for n string....

int n;
printf("Enter the value of n\n");
scanf("%d",&n);

char **s;

s=malloc(sizeof(char*)*n);
for(i=0;i<n;i++)
s[i]=malloc(sizeof(char)*10);

for(i=0;i<n;i++)
scanf("%s",s[i]);

for(i=0;i<n;i++)
printf("%s\n",s[i]);

}

 


