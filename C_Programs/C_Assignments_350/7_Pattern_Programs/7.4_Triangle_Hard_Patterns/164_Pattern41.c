/*
  WACP to print the following number pattern
  1
  131
  13531
  1357531
  135797531
 */

#include<stdio.h>

void main()
{
        int Column,Row,Increment;
        for(Row=1;Row<=5;Row++)
        {
                for(Column=1;Column<=2*Row-1;Column+2)
                {
                        printf("%d",Column);
                }
			for(Increment=Column-2;Increment>=1;Increment-2)
			{        
				printf("%d",Increment);
       			}
			printf("\n");    
	}	
}	
