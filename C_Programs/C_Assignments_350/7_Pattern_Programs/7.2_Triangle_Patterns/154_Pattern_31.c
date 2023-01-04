/*
***********************************************************************
WACP to print the following number pattern
  12345
  2345
  345
  45
  5

***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=Row;Column<=5;Column++)
                {
                        printf("%d",Column);
                }
                        printf("\n");
        }
}

