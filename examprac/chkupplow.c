#include<stdio.h>
main()
{
char ch;
printf("Enter the character...\n");
scanf("%c",&ch);

/*

if(ch>='A' && ch<='Z')
printf("Upper character and convert to %c",ch=ch+32);
else if(ch>='a' && ch<='z')

printf("lower character and convert to %c",ch=ch-32);
else 
printf("Enter the proper character");

*/

int j;
j=ch&1<<5;

j?printf("character is lower convert to %c",ch^1<<5):printf("character is uppre convert to %c",ch^1<<5);

}

