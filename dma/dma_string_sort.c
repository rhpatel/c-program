#include<stdio.h>
#include<stdlib.h>
main()
{
	char **s,*temp;
	int i,j,k,num;
	printf("Enter the number of string you want :\n");
	scanf("%d",&num);


	s=calloc(num,sizeof(char *));

	for(i=0;i<num;i++)      
		s[i]=calloc(10,sizeof(char));

	for(i=0;i<num;i++)
	{
		printf("Enter the %d string\n",i+1);
		scanf("%s",s[i]);
	}

	for(i=0;i<num-1;i++)
             {
		for(j=0;j<num-1-i;j++)
		{
			if(strcmp(s[j],s[j+1])==1)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}            
                 }
                }
			for(i=0;i<num;i++)
				printf("%s\n",s[i]);
 

}













