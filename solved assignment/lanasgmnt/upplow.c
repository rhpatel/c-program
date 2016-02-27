#include<stdio.h>
main()
{
char ch;
printf("Enter the character...\n");
scanf("%c",&ch);

if(ch>='A'&& ch<='Z')
{
 ch=ch+32;
printf("%c Convert to lower",ch);
}
else if(ch>='a'&& ch<='z')
{
ch=ch-32;
printf("%c Convert to upper",ch);
}
else
printf("Enter proper character");

printf("\n");
}

