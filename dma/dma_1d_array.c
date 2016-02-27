#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,*p,num,max=0;

	printf("Enter the element you  want :\n");
	scanf("%d",&num);

	p=calloc(num,sizeof(int));

	for(i=0;i<num;i++)
		scanf("%d",&p[i]);


	for(i=0;i<num;i++)
		if(max<p[i])
			max=p[i];

	printf("%d ",max);

}










