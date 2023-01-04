/*
************************************************************************  
WACP to print the following number pattern
  11111
  2222
  333
  44
  5
************************************************************************
*/


#include<stdio.h>

void main()
{
        int Column,Row;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=Row;Column<=5;Column++)
                {
                        printf("%d",Row);
                }
                        printf("\n");
        }
}
                      
