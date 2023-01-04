/*
********************************************************************************************
WACP to print the following number pattern
12345
23451
34521
45321
54321
********************************************************************************************  
 */

#include<stdio.h>

void main()
{
        int Column,Row,Increment;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=Row;Column<=5;Column++)
                {
                        printf("%d",Column);
                }
                        for(Increment=Row;Increment>1;Increment--)
                        {
                                printf("%d",Increment-1);
                        }
                                printf("\n");
        }
}


