/*
***********************************************************************
WACP to print the following number pattern
  5
  54
  543
  5432
  54321
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
                        printf("%d",Column);
                }
                        printf("\n");
        }
}

