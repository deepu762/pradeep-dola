/*Wacp to print the following fibanocci series

*
* *
* * * 
* * * *

***********************************************
*/
/*#include<stdio.h>

void main()
{
 	int i,j,Number;
	printf("Enter no of rows \n");
	scanf("%d",&Number);
	for(i=1;i<=Number;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*************************************************************************************************************************
*/

/*
#include<stdio.h>

void main()
{
        int i,j,Number;
        printf("Enter no of rows \n");
        scanf("%d",&Number);
        for(i=1;i<=Number;i++)
        {
                for(j=i;j<=Number;j++)
                {
                        printf("*");
                }
                printf("\n");
        }
}

**************************************************************************************************************************
*/

#include<stdio.h>

void main()
{
        int i,j,Number;
        printf("Enter no of rows \n");
        scanf("%d",&Number);
        for(i=Number;i>=1;i--)
        {
                for(j=Number;j>=i;j--)
                {
                        printf("*");
                }
                printf("\n");
        }
}

