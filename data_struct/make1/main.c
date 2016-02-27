#include"header.h"
main()
{

	B *headptr=0;
	char ch;
        int c;
       	read(&headptr);
        c=count(headptr);
        printf("count=%d\n",c);
	print_rec(headptr);
	do
	{
		//	add_begin(&headptr);
		//	add_end(&headptr);
		add_middle(&headptr);
		printf("Do you want to add node Y/y  \n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	save(headptr); 
	print(headptr);
        printf("-----------------------\n");
        //print_rev_n(headptr);
       
        //rev_link(headptr);
       // rev(&headptr);
             rev_1(&headptr);
             print(headptr);
  //     del(&headptr);
//       print(headptr);
}



