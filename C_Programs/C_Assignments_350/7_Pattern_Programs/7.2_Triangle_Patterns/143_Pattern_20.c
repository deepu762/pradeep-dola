/*
  WACP to print the following number pattern
  1
  22
  333
  4444
  55555
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=1;Column<=Row;Column++)
                {
                        printf("%d",Row);
                }
                        printf("\n");
        }
}              
