/*
***********************************************************************
WACP to print the following number pattern
  12345
  1234
  123
  12
  1
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=5;Row>=1;Row--)
        {
                for(Column=1;Column<=Row;Column++)
                {
                        printf("%d",Column);
                }
                        printf("\n");
        }
}

