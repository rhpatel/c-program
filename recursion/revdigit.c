#include<stdio.h>
int sum(int,int);
main()
{
int tot,num,ans=0;
printf("Enter the number..\n");
scanf("%d",&num);
tot=sum(ans,num);
printf("total=%d\n",tot);
}

int sum(int ans,int n)
{ 
if(n>0)
 {
int r;
 r=n%10;
 n=n/10;
ans=(ans*10)+r;
return(sum(ans,n));
 }
else
return;
}
