/*
********************************************************************************************
WACP to print the following number pattern
*
*1*
*1 2 1*
*1 2 3 2 1*
*1 2 3 4 3 2 1*
*1 2 3 4 5 4 3 2 1*
*1 2 3 4 3 2 1*
*1 2 3 2 1*
*1 2 1*
*1*
*
********************************************************************************************  
 */

#include<stdio.h>

void main()
{
        int Column,Row,Increment=1;
	printf("*\n");
        for(Row=1;Row<=5;Row++)
        {       
			printf("*");
                for(Column=1;Column<=Row;Column++)
                {
                        printf("%d",Column);
                }
                        for(Increment=Column-2;Increment>=1;Increment--)
                        {
                                printf("%d",Increment);
                        }
                        printf("*\n");
        }
        for(Row=1;Row<5;Row++)
        {      
			printf("*");
                for(Column=1;Column<=5-Row;Column++)
                {
                        printf("%d",Column);
                }
                        for(Increment=Column-2;Increment>=1;Increment--)
                        {
                                printf("%d",Increment);
                        } 
                        printf("*\n");
        }
			printf("*\n");
}

