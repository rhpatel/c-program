#include"header.h"

B* search(B *ptr,int n)
{
if(ptr)
{
  if(ptr->rollno==n)
    return(ptr);
  else
    return(search(ptr->next,n));
}
else
 return 0;
}

// remove duplicate node;




