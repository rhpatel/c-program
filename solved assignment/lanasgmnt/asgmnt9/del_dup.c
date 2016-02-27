void del_dup(B **ptr)
{
	B *temp,**p,temp1;
	int i,j,k,c;

	c=count(*ptr);
	temp=*ptr;
	p=malloc(sizeof(B*)*c);
	i=0;
       printf("ptr=%p\n",temp);
	while(temp)
	{	
           p[i]=temp;
		temp=temp->next;
                   i++;
	}

	for(i=0;i<c-1;i++)
	{
		{for(j=i+1;j<c;j++)
			{  
				if(p[i]->rollno==p[j]->rollno)
				{    
                                    // printf("HIT\n");
                                     
					p[j-1]->next=p[j]->next;
					free(p[j]);
					for(k=j;k<c-1;k++)
					{
                                           p[k]=p[k+1];
					} 
                                        j--;  
					c--;
                                      
				}
			}
		}
	}
}          


