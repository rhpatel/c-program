#include<stdio.h>
#include<string.h>
main()
{
char s1[25],s2[25],*p;
int w,i,j,c=1,m=0,n,k,s;
printf("Enter the first string");
gets(s1);
printf("Enter the second string");
gets(s2);
printf("Enter the word you want to relace");
scanf("%d",&w);

for(i=0;s1[i];i++)
{  if(w==c)
      {
        p=&s1[i];
        j=i;
        break;
      }
   else if (s1[i]==' ')
         c++;
}
printf("%c\n",*p);


for(k=j;s1[k]!=' ';k++)
    {m++;}
printf("length s1=%d\n",m);
printf("length s2=%d\n",n=strlen(s2));

s=n-m;

for(i=0;s1[i];i++);

for(i=i;&s1[i]!=p;i--)
{  s1[i+s]=s1[i];
}

for(i=0;s2[i];i++)
  *p++=s2[i];

puts(s1);

}






