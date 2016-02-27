# 1 "mac_4.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "mac_4.c"



main()
{
int n=1,i,pos=3;

n=n||1<<pos;
for(i=31;i>=0;i--)
printf("%d",n>>i&1);

printf("\n");

n=n& ~(1<<pos);
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");

n=n^(1<<pos);
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");
}
