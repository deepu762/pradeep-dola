/*
***********************************************************************
WACP to print the following number pattern
  13579
  3579
  579
  79
  9
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=9;Row+=2)
        {
                for(Column=Row;Column<=9;Column+=2)
                {
                        printf("%d",Column);
                }
                        printf("\n");
        }
}

