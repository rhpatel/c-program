//Write a program to sort a given string in ascending order.

#include<stdio.h>
main()
{
char s[15],temp;
int i,j,k,len;
printf("Enter the string..\n");
scanf("%s",s);

for(i=0;s[i];i++);
len=i;


for(i=0;i<=len;i++)
 {
   for(j=0;j<len-i-1;j++)
    {
      if(s[j]>s[j+1])
        {
          temp=s[j];
          s[j]=s[j+1];
          s[j+1]=temp;
        }
     }
  }

puts(s);
}
