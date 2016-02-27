#include<stdio.h>
main()
{
int a[5],i,j,k=0,ele;

printf("Size of array=%d\n",sizeof(a));
ele=sizeof(a)/sizeof(a[0]);

printf("Enter the array\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("number of elements=%d\n",ele);



printf("////////////entered  array is////////////////\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);

/*
printf("\n");
printf("/////////////// Reverse printing////////////\n");
for(i=ele-1;i>=0;i--)
printf("%d ",a[i]);

printf("\n");
//Reversed array
for(i=0,j=ele-1;i<j;i++,j--)
{
k=a[i];
a[i]=a[j];
a[j]=k;
}

printf("///////////////// Final array is//////////////////\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

*/
for(i=0;i<ele;i++)
{
if(a[i]%2==0)
k++;
}

printf("Number of odd=%d and num of even=%d\n",ele-k,k);

}








