/*
***********************************************************************
WACP to print the following number pattern
  1
  12
  123
  1234
  12345
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
                        printf("%d",Column);
                }
                        printf("\n");
        }
}

