#define BIG(i,j) { if(i>j)\
                   printf(#i "is greater" #j"\n");\
                   else\
                   printf(#j "is greater" #i"\n");}
                     
main()
{
int m=20,n=10;
BIG(m,n)
}
                  
