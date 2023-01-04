#include<stdio.h>

void main()
{
	int Number_1,Number_2,Number_3,Biggest;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&Number_1,&Number_2,&Number_3);
		if(Number_1>Number_2)
		    {
			  if(Number_1>Number_3)
			    		 	
	      	 		 {
				   Biggest=Number_1;
				 }
	       		   else
				 {
				  Biggest=Number_3;
			         }
		    }            
		else 
		    {
			 if(Number_2>Number_3)
			      	{
				Biggest=Number_2;
				}
	         	 else
				{
			    	Biggest=Number_3;
				}
			    
		     }
	printf("%d is the biggest number among  %d,%d,%d",Biggest,Number_1,Number_2,Number_3);
}
