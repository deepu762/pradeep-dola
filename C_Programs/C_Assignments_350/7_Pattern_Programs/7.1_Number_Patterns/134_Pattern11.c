/*
  WACP to print the following number pattern
  12345
  12345
  12345
  12345
  12345
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=1;Column<=5;Column++)
                {
                        printf("%d",Column);
                }
                	printf("\n");
        }
}


