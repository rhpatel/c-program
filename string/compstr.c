#include<stdio.h>
main()

{
int i;
char s1[10],s2[10];
printf("Enter the first string\n");
scanf("%s",s1);
printf("Enter the second character\n");
scanf("%s",s2);

for(i=0;s1[i];i++)
{
if(s1[i]!=s2[i])
break;
}

if(s1[i]==s2[i])
printf("Equal\n");
else
printf("Not Equal\n");




//printf("%s\n",s);

}

