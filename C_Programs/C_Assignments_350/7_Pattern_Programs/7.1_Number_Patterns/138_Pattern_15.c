/*
********************************************************************************************
WACP to print the following number pattern
12345
23455
34555
45555
55555
********************************************************************************************  
 */

#include<stdio.h>

void main()
{
        int Column,Row,Increment;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=Row;Column<5;Column++)
                {
                        printf("%d",Column);
                }
                        for(Increment=1;Increment<=Row;Increment++)
                        {
                                printf("%d",Column);
                        }
                                printf("\n");
        }
}

