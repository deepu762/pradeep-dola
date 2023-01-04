/*
***********************************************************************
WACP to print the following number pattern
  54321
  4321
  321
  21
  1
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=5;Row>=1;Row--)
        {
                for(Column=Row;Column>=1;Column--)
                {
                        printf("%d",Column);
                }
                        printf("\n");
        }
}

