#include<stdio.h>
main()
{
char s1[15],s2[15],s3[30];
int i,j,k;
printf("Enter the first string\n");
scanf(" %s",s1);
printf("Enter the second string\n");
scanf(" %s",s2);

j=0;
for(i=0;s1[i]&&s2[i];i++)
{s3[j++]=s1[i];
s3[j++]=s2[i];
}

if(s1[i]=='\0')
{ 
for(k=i;s2[k];k++)
s3[j++]=s2[k];
}

else if(s2[i]=='\0')
{
for(k=i;s1[k];k++)
s3[j++]=s1[k];
}


s3[j]='\0';
printf("%s",s3);
}


