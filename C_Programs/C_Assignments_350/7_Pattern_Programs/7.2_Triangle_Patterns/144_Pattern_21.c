/*
***************************************************************
WACP to print the following number pattern
  55555
  4444
  333
  22
  1
 **************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=5;Row>=1;Row--)
        {
                for(Column=1;Column<=Row;Column++)
                {
                        printf("%d",Row);
                }
                        printf("\n");
        }
}

