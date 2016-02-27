#include<stdio.h>
main()
{
char s[10],temp;

int i,j;
printf("Enter the string\n");
scanf("%s",s);
for(i=0;s[i];i++);

for(j=0,i=i-1;j<i;j++,i--)
{ temp=s[j];
  s[j]=s[i];
 s[i]=temp;

}

printf("Reverse string=%s\n",s);
}
