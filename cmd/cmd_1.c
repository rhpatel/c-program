//Command line argument  basic calculator

#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
int i,j,op;
char ch;
if(argc<3)
 printf("Enter Proper argument");
else
{
i=atoi(argv[1]);
j=atoi(argv[3]);
ch=argv[2][0];
    switch(ch)
    {
    case '+':
         printf("sum=%d",i+j);
    break;
    case '-':
         printf("Sub=%d",i-j);
    break;
   }

}
printf("\n");
}





