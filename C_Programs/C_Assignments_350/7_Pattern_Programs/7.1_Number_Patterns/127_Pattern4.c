/*
  WACP to print the following number pattern
  11111
  10001
  10001
  10001
  11111
 */

#include<stdio.h>

void main()
{
        int Column,Row;
        for(Column=1;Column<=5;Column++)
        {
     		for(Row=1;Row<=5;Row++)
           	{
                        if(Row==1||Row==5||Column==1||Column==5)
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

