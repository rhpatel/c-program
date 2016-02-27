/*
Write a program to remove the conjucutive spaces in a given string line.
       Ex: Input:  Vector        India      Pvt     Ltd
             Output: Vector India Pvt Ltd;


*/


#include<stdio.h>
main()
{
char s[25];
int i,j,k;

printf("Enter the string\n");
gets(s);

for(i=0;s[i];i++)
{
  if(s[i]==' ' && s[i+1]==' ')
   {
     for(j=i;s[j];j++)
      {
        s[j]=s[j+1];
       }
     i=i-1;
   }
 }    
puts(s);     
}    
     


