#include"header.h"

main()
{
char ch;
int c,n;
B *headptr=0,*p;

read(&headptr);
print(headptr);
c=count(headptr);
printf("Count=%d\n",c);

do
{
add_middle(&headptr);
//add_end(&headptr);
//add_begin(&headptr);
printf("Do you want to add node Y/y\n");
scanf(" %c",&ch);
}while((ch=='Y')||(ch=='y'));

print(headptr);
save(headptr);
//rev_data(headptr);
//printf("---------------\n");
//print_rec(headptr);
//rev_link1(&headptr);
printf("---------------\n");
//del_all(&headptr);
//printf("Enter the rollno want to search\n");
//scanf("%d",&n);
//p=search(headptr,n);
//printf("address=%p",p);
del_dup(&headptr);
printf("---------------\n");
print(headptr);

}



