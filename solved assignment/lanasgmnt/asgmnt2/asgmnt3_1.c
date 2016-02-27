/*     *
      *  *
        *    
*/

#include<stdio.h>
main()
{
int i,j,k,num;
printf("Enter the number");
scanf("%d",&num);

for(i=1;i<num;i++)
{
  for(j=num;j>i;j--)
   {
      printf(" ");

   }
  for(k=1;k<=i;k++)
   {  
     printf("* ");
   }
   printf("\n");
}

for(i=num;i>=1;i--)
{
  for(j=num;j>i;j--)
   {
      printf(" ");

   }
  for(k=1;k<=i;k++)
   {  
     printf("* ");
   }
   printf("\n");
}

}
