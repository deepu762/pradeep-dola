/*
***********************************************************************
WACP to print the following number pattern
  56789
  4567
  345
  23
  1
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=5;Row>=1;Row--)
        {
                for(Column=Row;Column<=2*Row-1;Column++)
                {
                        printf("%d",Column);
                }
                        printf("\n");
        }
}

