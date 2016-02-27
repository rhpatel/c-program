#include<stdio.h>
main()

{
int i,j;
char s1[10],s2[10];
printf("Enter the first string\n");
scanf("%s",s1);
printf("Enter the second string\n");
scanf("%s",s2);

for(i=0;s1[i];i++);
for(j=0;s2[j];j++)
{
s1[i+j]=s2[j];
}

s1[i+j]=s2[j];


printf("%s\n",s1);
}


