/*
********************************************************************************************
WACP to print the following number pattern
55555
54444
54333
54322
54321
********************************************************************************************  
 */

#include<stdio.h>

void main()
{
        int Column,Row,Increment;
        for(Row=5;Row>=1;Row--)
        {
                for(Column=5;Column>=Row;Column--)
                {
			printf("%d",Column);
		}
			for(Increment=1;Increment<Row;Increment++)
			{
				printf("%d",Row);
			}
                                printf("\n");
	}
}              
