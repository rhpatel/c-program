#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,**p,r,c,j;

	printf("Enter the element rows and columns  you  want :\n");
	scanf("%d %d",&r,&c);

	p=calloc(r,sizeof(int*));

	for(i=0;i<r;i++)
		p[i]=calloc(c,sizeof(int));


	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&p[i][j]);


	for(i=0;i<r;i++)
             {
		for(j=0;j<c;j++)
			printf("%d ",p[i][j]);

                     printf("\n");
            }


}










