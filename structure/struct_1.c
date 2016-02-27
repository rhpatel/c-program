#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct A
{ 
int d;
char ch[10];
float f;
}B; 

main()
{
	int num,i,j,choice,m=0;
	B *temp;    
	B **p;
	printf("Enter the number...\n");
	scanf("%d",&num);
	p=calloc(num,sizeof(B*));

	for(i=0;i<num;i++)
		p[i]=malloc(sizeof(B));

	for(i=0;i<num;i++)
	{
		printf("Enter details of %d student\n",i+1);
		scanf("%d %s %f",&p[i]->d,p[i]->ch,&p[i]->f);
	}

	//printf("%u %u",p[1],p[2]);


	printf("Enter the choice\n1)roll no \n2)name \n3)marks\n");
	scanf(" %d",&choice);

	switch(choice)
	{
		case 1:
			for(i=0;i<num-1;i++)
			{
				for(j=0;j<num-i-1;j++)
				{
					if((p[j]->d)>(p[j+1]->d))
					{ temp=p[j];
						p[j]=p[j+1];
						p[j+1]=temp;}
				}
			}
			break;
		case 2:
			for(i=0;i<num-1;i++)
			{
				for(j=0;j<num-i-1;j++)
				{  
					m=strcmp(p[j]->ch,p[j+1]->ch);
					if(m==1)
					{ printf("%s %s\n",p[j]->ch,p[j+1]->ch);
						temp=p[j];
						p[j]=p[j+1];
						p[j+1]=temp;}
				}
			}
			break;
		case 3:
			for(i=0;i<num-1;i++)
			{
				for(j=0;j<num-i-1;j++)
				{
					if((p[j]->f)>(p[j+1]->f))
					{ temp=p[j];
						p[j]=p[j+1];
						p[j+1]=temp;}
				}
			}
	
	break;
    }
for(i=0;i<num;i++)
{printf("Details of %d student\n",i+1);
	printf("%d %s %f\n",p[i]->d,p[i]->ch,p[i]->f);
}


}










