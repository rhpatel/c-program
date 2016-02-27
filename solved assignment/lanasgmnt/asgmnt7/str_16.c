/*
     program to accept two strings from user into two character array and copy one 
       by one character into another destination array.
	Ex:  First String      : “abcdefg”
                   Second String : “1234”
	        then  Destination String  is  “a1b2c3d4efg”

*/

#include<stdio.h>
main()
{
char s1[15],s2[15],s3[30];
int i,j,k=0;
printf("Enter the first string..\n");
gets(s1);
printf("Enter the second string..\n");
gets(s2);
for(i=0;s1[i]&&s2[i];i++)
{
 s3[k++]=s1[i];
s3[k++]=s2[i];
}

if(s1[i]=='\0')
{for(j=i;s2[j];j++)
  s3[k++]=s2[j];
}
else
 for(j=i;s1[j];j++)
  s3[k++]=s1[j];
 



s3[k]='\0';
puts(s3);
}







