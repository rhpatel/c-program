#define swap(a,b,type) {type temp;\
                   temp=a;\
                   a=b;\
                   b=temp;}    
                   
main()
{
int i=10,j=20;
swap(i,j,int)
printf("after swap i=%d,j=%d",i,j);

float m=3.5,n=4.5;
swap(m,n,float)
printf("after swap i=%fj=%f",m,n);
}
