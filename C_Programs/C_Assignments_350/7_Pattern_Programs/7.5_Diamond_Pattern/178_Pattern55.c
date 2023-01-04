/*
  WACP to print the following number pattern
  1
  12
  123
  1234
  12345
  1234
  123
  12
  1
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


~                   g
