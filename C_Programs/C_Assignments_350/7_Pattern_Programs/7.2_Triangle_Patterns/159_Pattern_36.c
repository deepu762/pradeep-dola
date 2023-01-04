/*
***********************************************************************
WACP to print the following number pattern
  1
  00
  111
  0000
  11111
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=1;Column<=Row;Column++)
                {
                        if(Row%2==0)
                        {
                                printf("0");
                        }
                        else
                        {
                                printf("1");
                        }
                }
                        printf("\n");
        }
}

