/*
********************************************************************************************
WACP to print the following number pattern
1		1
  2 	      2
    3 	    3
      4   4
        5 
      4   4
    3       3
  2           2
1               1
********************************************************************************************  
 */

#include<stdio.h>

void main()
{
        int Column,Row,Increment=1;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=1;Column<=9;Column++)
                {
			if(Column==Row||Column==(10-Row))
			{
				printf("%d",Row);
			}
			else
			{
				printf(" ");      
	      		}
		}
				printf("\n");
                
        }
}

