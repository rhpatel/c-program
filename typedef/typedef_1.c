// typedef

typedef int array[5];
typedef int* ptr;
typedef int fun(int,int);
typedef int (*f)(int,int);
f call(void);
fun sum,sub;
main()
{
int i=10,j=20,op;
f p;
p=call();


op=(*p)(i,j);
printf("op=%d\n",op);

op=p(i,j);

printf("op=%d\n",op);
}

int sum(int i,int j)
{
return(i+j);
}


f call(void)
{
return sum;
}





