/*
***********************************************************************
WACP to print the following number pattern
  5
  45
  345
  2345
  12345
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=5;Row>=1;Row--)
        {
                for(Column=Row;Column<=5;Column++)
                {
                        printf("%d",Column);
                }
                        printf("\n");
        }
}

