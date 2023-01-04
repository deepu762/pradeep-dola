/*
***********************************************************************
WACP to print the following number pattern
  5
  44
  333
  2222
  11111
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=5;Row>=1;Row--)
        {
                for(Column=5;Column>=Row;Column--)
                {
                        printf("%d",Row);
                }
                        printf("\n");
        }
}
        
