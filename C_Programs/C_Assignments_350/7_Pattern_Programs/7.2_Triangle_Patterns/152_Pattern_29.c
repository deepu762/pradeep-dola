/*
***********************************************************************
WACP to print the following number pattern
  54321
  5432
  543
  54
  5
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=5;Column>=Row;Column--)
                {
                        printf("%d",Column);
                }
                        printf("\n");
        }
}

