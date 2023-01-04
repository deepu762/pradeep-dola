/*
***********************************************************************
WACP to print the following number pattern
  1
  10
  101
  1010
  10101
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

