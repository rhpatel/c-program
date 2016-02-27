// sting join using character array

#include<stdio.h>
main()
{
	char s1[50]="Vector",s2[10]="Training",s3[15]="Institute",*p ;
	int i,j,k;
	p=s1;

	for(;*p;p++);

	*p++=' ';

	for(j=0;s2[j];j++)
		*p++=s2[j];

	*p++=' ';

	for(k=0;s3[k];k++)
		*p++=s3[k];

	*++p='\0';


	printf("%s\n",s1);
}
