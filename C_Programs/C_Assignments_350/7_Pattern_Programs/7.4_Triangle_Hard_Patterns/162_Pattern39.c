/*
***********************************************************************
WACP to print the following number pattern
  1
  123
  12345
  1234567
  123456789
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=1;Column<=2*Row-1;Column++)
                {
                        printf("%d",Column);
                }
                        printf("\n");
        }
}

