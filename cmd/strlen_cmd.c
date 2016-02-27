//Command line argument

#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{

int i;

char ch[10];

   if(argc==1)
         printf("enter argument");
   else
	{
	  for(i=0;argv[1][i];i++);
           printf("string len=%d\n",i);

	}
}






