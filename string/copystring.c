#include<stdio.h>
main()
{
char s1[10],s2[10];
int i,j,k;

printf("Enter the string\n");
scanf("%s",s1);

for(i=0;s1[i];i++)
{
s2[i]=s1[i];
}
s2[i]='\0';
//printf("%d\n",i);
printf("Copied string=%s\n",s2);
}

