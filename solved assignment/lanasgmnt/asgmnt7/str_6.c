#include<stdio.h>
#include<string.h>
void my_strrev(char *,char *);

main()
{
char s1[15],*p,*q,temp;
int i,j,k;
printf("Enter the string...\n");
scanf("%s",s1);
p=s1;
q=s1+strlen(s1)-1;
/*
for(;p<q;p++,q--)
{
 temp=*p;
 *p=*q;
*q=temp;
}
*/
my_strrev(p,q);
puts(s1);
}


void my_strrev(char *p,char *q)
 {
   char temp;
     if(p<q)
       {   
         temp=*p;
         *p=*q;
         *q=temp;
         return(my_strrev(p+1,q-1));
     }
   else
    return;
}









