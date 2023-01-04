/*
  WACP to print the following number pattern
  01010
  01010
  01010
  01010
  01010
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Column=1;Column<=5;Column++)
        {
                for(Row=1;Row<=5;Row++)
                {
			if(Row%2==0)
			{
                        	printf("1");
			}
			else
			{
				printf("0");
			}
                }
                        	printf("\n");
        }
}

