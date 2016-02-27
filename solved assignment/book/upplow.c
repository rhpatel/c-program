#include<stdio.h>
main()
{
char ch;
printf("Enter the character ...\n");
scanf("%c",&ch);
if(ch>='A'&& ch <='Z')
printf("character is Upper Case\n");
else if(ch>='a'&& ch <='z')
printf("Character is a Small \n");
else 
{
printf("Enter proper character\n");
}
}
