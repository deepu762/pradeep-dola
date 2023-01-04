/*
***********************************************************************
WACP to print the following number pattern
  1
  21
  321
  4321
  54321
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=Row;Column>=1;Column--)
                {
                       printf("%d",Column);
                }
                        printf("\n");
        }
}

