#include<stdio.h>
main()
{
char ch;
printf("enter the character\n");
scanf("%c",&ch);

if(ch>='a' && ch<='z')
{
ch=ch-32;
printf("character is converted to upper\n");
}
else if (ch>='A' && ch<='Z')
{
ch=ch+32;
printf("character is converted to lower\n");
}

else if (ch>='0' && ch<='9')
{
printf("character is Digit\n");
}

else
{printf("it is a special Character\n");}

printf("final character is = %c and its ascii=%d\n",ch,ch);

}
