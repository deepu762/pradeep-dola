/*
  WACP to print the following number pattern
  11111
  22222
  33333
  44444
  55555
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=1;Column<=5;Column++)
                {
			printf("%d",Row);
                }
                        printf("\n");
        }
}


