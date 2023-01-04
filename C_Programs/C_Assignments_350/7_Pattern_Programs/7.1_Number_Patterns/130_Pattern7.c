/*
  WACP to print the following number pattern
  11011
  11011
  00000
  11011
  11011
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=1;Column<=5;Column++)
                {
                        if(Row==3||Column==3)
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


