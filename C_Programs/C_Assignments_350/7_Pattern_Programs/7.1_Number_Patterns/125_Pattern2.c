/*
  WACP to print the following number pattern
  11111
  00000
  11111
  00000
  11111
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Column=1;Column<=5;Column++)
        {
                for(Row=1;Row<=5;Row++)
                {
			if(Column%2==0)
		        {
				printf("0");
			}
			else
			{
                	        printf("1");
			}
		}	
				printf("\n");
	}
}

