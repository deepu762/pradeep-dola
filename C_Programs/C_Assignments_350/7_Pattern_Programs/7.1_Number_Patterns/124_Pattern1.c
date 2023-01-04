/*
  WACP to print the following number pattern
  11111
  11111
  11111
  11111
  11111
 */

#include<stdio.h>

void main()
{
	int Columns,Rows;
	for(Columns=1;Columns<=5;Columns++)
	{
		for(Rows=1;Rows<=5;Rows++)
		{
			printf("1");
		}
			printf("\n");
	}
}
