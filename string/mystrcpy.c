#include<stdio.h>
//char * my_strcpy(char *,char *);
char * my_strncpy(char *,char *,int);
main()
{
char s1[10],s2[10],*p;
int n;
printf("%p\n",s2);
printf("Ente the string s1\n");
scanf("%s",s1);

printf("Enter the character\n");
scanf("%d",&n);

//p=my_strcpy(s2,s1);
p=my_strncpy(s2,s1,n);
printf("copied string s2=%s \n its address is %p\n",s2,p);

} 
//char * my_strcpy(char *q,char *p)
char *my_strncpy(char *q,char *p,int n)
{
static int c; 
//if(*p)   //for strcpy
if(n--)   //for strncpy
{
 *q=*p;
c++;
//  my_strcpy(q+1,p+1);  //for strcpy
return(my_strncpy(q+1,p+1,n));
}
else
{
*q='\0';
return q-c;
}

/*

int i;
for(i=0;p[i];i++)
{
 q[i]=p[i];
}
q[i]=p[i];
return q;
*/
}







