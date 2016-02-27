//factorial
#include<stdio.h>
static int sum=0;
int op(int,int);
main()
{
	int num,i=1,total;
	printf("Enter the number\n");
	scanf("%d",&num);
	total=op(num,i);
	printf("total=%d\n",total);
}

int op(int n,int i)
{
	if(i<n)
	{
		if(n%i==0)
		{sum=sum+i;
			printf("%d\t",i);  
		}
		return(op(n,i+1));
	}

	else 
		return sum;
}



