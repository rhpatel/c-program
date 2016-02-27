#include<stdio.h>
main()
{ int i,num,pos=31;

printf("Enter the number");
scanf("%d",&num);

abc: 
	i=num>>pos&1;
	printf("%d",i);
		if((pos)%8==0)
		printf(" ");
  pos--;
  if(pos>=0)
  goto abc; 

}
