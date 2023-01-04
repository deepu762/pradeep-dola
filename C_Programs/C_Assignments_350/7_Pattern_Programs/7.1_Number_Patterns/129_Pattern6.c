/*
  WACP to print the following number pattern
  10101
  01010
  10101
  01010
  10101
 */

#include<stdio.h>

void main()
{
        int Column,Row,Increment;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=1;Column<=5;Column++)
                {
                        printf("%d",Increment%2);
			Increment++;
		}
                        printf("\n");
        }
}


