/*
***********************************************************************
WACP to print the following number pattern
  1
  01
  010
  1010
  10101
***********************************************************************
 */

#include<stdio.h>

void main()
{
        int Column,Row,Increment=1;
        for(Row=1  ;Row<=5;  Row++)
        {
                for(Column=1;  Column<=Row;   Column++)
                {
                        if(Increment%2!=0)
			{
		       		printf("1");
			}
			else
			{
				printf("0");
			}
				Increment++;
                }
                        	printf("\n");
        }
}

