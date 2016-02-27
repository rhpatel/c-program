#include<stdio.h>
main()
{
int key,i,j,k,c=0;
char s1[150]="our rgeaetst ewakenss iles ni giivng pu. thm eosc teratin awy ts ouceed si alwyas tt ory ujst noe mroe tmie",temp;

//printf("Enter the string\n");
//gets(s1);
printf("Enter the key\n");
scanf("%d",&key);

          puts(s1);  
for(i=0;s1[i];i++)
  {   
    if(s1[i+1]=='\0')
         break;  
    if(s1[i]==' '||s1[i]=='.')
         continue;

    if((s1[i+1]==' ')||(s1[i+1]=='.'))
              { c++;
               if(c%4==0)
              {
                temp=s1[i];
                s1[i]=s1[i+2];
                s1[i+2]=temp;
              }
                           
              }  
   else
           {
            c++;
         //  printf("%d %c\n", c,s1[i]); 
           if(c%4==0)
           {
            temp=s1[i];
             s1[i]=s1[i+1];
               s1[i+1]=temp;
             }  
            
           }
   }
        
   
puts(s1);
}
     






