#include<stdio.h>
main()
{
int i,j,k,c[255]={0};
char s[20];
printf("Enter the string...\n");
gets(s);

 for(i=0;s[i];i++)
  c[s[i]]++;

for(i='A';i<'z';i++)
  if(c[i]>1)
    printf("%c is %d Times\n",i,c[i]);

}
  



