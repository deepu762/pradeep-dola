/*
********************************************************************************************
WACP to print the following number pattern
12345
21234
32123
43212
54321
********************************************************************************************  
 */

#include<stdio.h>

void main()
{
        int Column,Row,Increment;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=Row;Column>=1;Column--)
                {
                        printf("%d",Column);
                }
                        for(Increment=2;Increment<=6-Row;Increment++)
                        {
                                printf("%d",Increment);
                        }
                                printf("\n");
        }
}


