#include<stdio.h>

void main()
{
        int i,j,Number;
        printf("Enter no of rows \n");
        scanf("%d",&Number);
        for(i=1;i<=Number;i++)
        {
                for(j=1;j<i;j++)
                {
                        printf(" ");
                }
                        for(j=i;j<=Number;j++)
                        {
                                printf("*");
                        }

        printf("\n");

        }
}


