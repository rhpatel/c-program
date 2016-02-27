#define SET(num,p)  num=num|1<<p;
#define CLEAR(num,p) num=num& ~(1<<p);
#define COMP(num,p) num=num^(1<<p);  
main()
{
int n=15,i,pos=3;

SET(n,pos)
for(i=31;i>=0;i--)
printf("%d",n>>i&1);

printf("\n");

CLEAR(n,pos)
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");

COMP(n,pos)
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");
}

                  
