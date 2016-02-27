
//calculator in cmd line

#include<stdio.h>
#include<stdlib.h>

main(char argc,char **argv)
{

	int i,j;
	char ch;
	i=atoi(argv[1]);
	j=atoi(argv[3]);
	ch=argv[2][0];
	printf("%d %d %c\n",i,j,ch);


	switch(ch)
	{
		case '+':
			printf("Sum=%d\n",i+j);
			break;
		case '-':
			printf("Sub=%d\n",i-j);
			break;
		case '*':
			printf("Mul=%d\n",i*j);
			break;
	}

}











