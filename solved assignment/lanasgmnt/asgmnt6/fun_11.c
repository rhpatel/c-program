//Write a recursive function to reverse the bits of a given number.



#include<stdio.h>
static int i=31,j=0;
void rev(int *);
main()
{
int num,i;
printf("Enter the number..\n");
scanf("%d",&num);

printf("\nBefore reverse..\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);


rev(&num);

printf("\nAfter reverse\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
}

void rev(int *p)
{int m,n;
if(i>j)
    {
     m=*p>>i&1;
     n=*p>>j&1;
     if(m!=n)
       {
          *p=*p^1<<i;
          *p=*p^1<<j;
        }
        i--;
        j++;
       rev(p); 
      }
}
        
 







