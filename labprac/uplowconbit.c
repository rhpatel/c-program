#include<stdio.h>
main()
{
char ch;

printf("Enter the character\n");//inform user to insert character
scanf("%c",&ch);//store inserted value to ch variable

if(ch>='A' && ch<='z')   //check for entered character is alphabet
{
	if(ch>='A' && ch<='Z') //check for upper case
         {
	   ch=ch|32; //set 5th bit or add 32 
	   printf("charcter is converted to lower\n character is=%c and is ascii value is%d\n",ch,ch);
         }
 
	
	else if (ch>='a' && ch<='z')//check for lower case
         {
	   ch=ch&~32; // clear bit 5 th so subtract 32 from number 
	   printf("charcter is converted to Upper\n character is=%c and is ascii value is%d\n",ch,ch);
         }
 }
else 
printf("enter the proper choice\n");// infrom that entered num is other than alphabet 

}
