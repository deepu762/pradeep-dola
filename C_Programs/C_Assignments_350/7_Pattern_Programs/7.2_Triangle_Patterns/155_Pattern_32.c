/*
***********************************************************************
WACP to print the following number pattern
  1
  23
  345
  4567
  56789
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=Row;Column<=2*Row-1;Column++)
                {
                        printf("%d",Column);
                }
                        printf("\n");
        }
}

