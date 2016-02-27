#include<stdio.h>
typedef struct A
{
int i;
char s[10];
float f;
}B;

main()
{
int i,j;
char ch;
B a[5],temp;

for(i=0;i<5;i++)
{
printf("Enter the  rollno name marks of %d student\n",i);
scanf("%d %s %f",&a[i].i,a[i].s,&a[i].f);
}
/*
for(i=0;i<5;i++)
printf("roll no =%d\n name =%s\n marks=%f \n",a[i].i,a[i].s,a[i].f);
*/

def:printf("Enter how to display\n 1)rollno\n 2)name \n3)marks\n4) exit");
scanf(" %c",&ch);

switch(ch)
{
case '1':
     for(i=0;i<5-1;i++)
     { for(j=0;j<5-i-1;j++)
          { if(a[j].i>a[j+1].i)
               {
                 temp=a[j];
                  a[j]=a[j+1];
                   a[j+1]=temp;
                }
            }
          }
   goto abc;
   break;

case '2':
     for(i=0;i<5-1;i++)
     { for(j=0;j<5-i-1;j++)
           { if(strcmp(a[j].s,a[j+1].s)==1)
               {
                 temp=a[j];
                  a[j]=a[j+1];
                   a[j+1]=temp;
                }
            }
          }
   goto abc;
   break;
  
case '3':
     for(i=0;i<5-1;i++)
     { for(j=0;j<5-i-1;j++)
          { if(a[j].f>a[j+1].f)
               {
                 temp=a[j];
                  a[j]=a[j+1];
                   a[j+1]=temp;
                }
            }
          }
   goto abc;
   break;
 case '4':
    return;

}                   

abc:for(i=0;i<5;i++)
printf("roll no =%d\n name =%s\n marks=%f \n",a[i].i,a[i].s,a[i].f);
goto def;
;
}
              






