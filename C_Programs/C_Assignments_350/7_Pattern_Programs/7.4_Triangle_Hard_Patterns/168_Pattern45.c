/*
********************************************************************************************
WACP to print the following number pattern
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15

********************************************************************************************  
 */

#include<stdio.h>

void main()
{
        int Column,Row,Increment=1;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=1;Column<=Row;Column++)
                {
                        printf("%-3d",Increment);
			Increment++;
		}
                        printf("\n");
        }
}

