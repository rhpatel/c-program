//String sort...... using pointer to an array....

// pointer to an array in function 

#include<stdio.h>
#include<string.h>
void strprnt(char (*)[10]);
main()
{

char s[5][10]={"xyz","abc","pqr","rst","mno"},(*p)[10],temp[10];
int i,j,c;



strprnt(s);
/*
p=s;
                                           // without function;
for(i=0;i<5-1;i++)
{
 for(j=0;j<5-1-i;j++)
   {
     c=strcmp(p[j],p[j+1]);
       if(c==1)
         { 
            strcpy(temp,s[j]);
            strcpy(s[j],s[j+1]);
            strcpy(s[j+1],temp);
        }
    }
}
*/

for(i=0;i<5;i++)
 printf("%s\n",s[i]);
}
     
void strprnt(char (*p)[10])
{
int i,j,c;
char temp[10];
                                          // with function;
for(i=0;i<5-1;i++)
{
 for(j=0;j<5-1-i;j++)
   {
     c=strcmp(p[j],p[j+1]);
       if(c==1)
         { 
            strcpy(temp,p[j]);
            strcpy(p[j],p[j+1]);
            strcpy(p[j+1],temp);
        }
    }
}

}




















