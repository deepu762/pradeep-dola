/*
***********************************************************************
WACP to print the following number pattern
  1
  11
  101
  1001
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
                        if(Row==1||Row==5||Column==1||Column==Row)
                        {
                                printf("1");
                        }
                        else
                        {
                                printf("0");
                        }
                }
                        printf("\n");
        }
}

