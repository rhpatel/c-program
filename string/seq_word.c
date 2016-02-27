#include<stdio.h>
void rev(char *,char *);
main()
{
char s1[20],s2[20],temp,*p,*q;
int i,j,k;
printf("enter the sequence..\n");
gets(s1);

for(k=0;s1[k];k++);

for(i=0,j=k-1;i<j;i++,j--)
{
   temp=s1[i];
   s1[i]=s1[j];
   s1[j]=temp;
}
puts(s1);
for(i=0;s1[i];i++)
  {
    p=&s1[i];
      for(j=i;s1[j];j++)
              if(s1[j]==' ')
               break;
            q=&s1[j-1];
           i=j;
      rev(p,q);         

}
puts(s1);
}
void rev(char *p,char *q)
{
char temp;
  for(;p<q;p++,q--)
    {
      temp=*p;
      *p=*q;
       *q=temp;
     }
}










