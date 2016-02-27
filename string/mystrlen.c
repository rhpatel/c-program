#include<stdio.h>
int my_strlen(char *);
main()
{
char s1[10];
int i,j;
printf("Enter the string\n");
scanf("%s",s1);

i=my_strlen(s1);

printf("Length of string is %d\n",i);

}

int my_strlen(char *p)
{

/*int i;
for(i=0;p[i];i++);
return i;
*/
if(*p)
{
return(1+my_strlen(p+1));
}
else
return 0;

}




