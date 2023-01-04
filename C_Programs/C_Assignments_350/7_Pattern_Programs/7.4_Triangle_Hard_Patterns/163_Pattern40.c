/*
***********************************************************************
WACP to print the following number pattern
  1
  24
  135
  2468
  13579
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {      
                for(Column=1;Column<=Row;Column++)
                {
                       if(Row%2==0)
		       {
				printf("%d",(2*Column));
		       }
		       else
		       {
		       	       printf("%d",(2*Column-1));
		       }
	 	
		}	       printf("\n");
        }
}

