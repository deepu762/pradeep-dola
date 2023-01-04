/*
  WACP to print the following number pattern
  12345
  23456
  34567
  45678
  56789
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=Row;Column<Row+5;Column++)
                {
                        printf("%d",Column);
                }
                                printf("\n");
        }
}


