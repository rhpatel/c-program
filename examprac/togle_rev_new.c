// rev digit string and convert upper (Generic for any string).... 



#include<stdio.h>
void strrev(char *,char*);
main()
{

char s[20],s1[10];
char *p,*q;
int i,j;

printf("Enter the string...\n");
gets(s);

for(i=0;s[i];i++)                               //Convert upper case
  if(s[i]>='a' && s[i]<='z')
      s[i]=s[i]-32;

for(i=0;s[i];i++)
  {
    if(s[i]>='0' && s[i]<='9')                  // check for digit
        {
           p=&s[i];                                // pointer assigned to first digit
             for(j=i;s[j];j++)
               if(s[j]<'0'||s[j]>'9')                // increment upto character arrived  (digit end)
               break;
           q=&s[j-1];                          // pointer assigned to last digit...
          
//         printf("%u %u\n",p,q);
         strrev(p,q);                          // function call to reverse selected string of digit
         i=j;                                    //  process resume again to search next  digit string...
       }
   }
puts(s);

}
void strrev(char *p,char *q)                   //function to reverse string....
{
 char temp;
for(;p<q;p++,q--)
{
    temp=*p;
   *p=*q;
   *q=temp;
}
}    





