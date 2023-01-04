#include<stdio.h>

void main()
{
        int Mat1[20][20],Mat2[20][20],Add=0,Row1,Column1,Row2,Column2,i,j,k;
        printf("Enter Row size and column size of Matrix 1:\n");
        scanf("%d%d",&Row1,&Column1);
        printf("Enter Elements of Matrix 1\n");
        for(i=0  ;i<Row1  ;i++  )
        {
                for(j=0 ;j<Column1 ;j++)
                {
                        scanf("%d",&Mat1[i][j]);
                }
        }
	printf("Enter Row size and column size of Matrix 2:\n");
        scanf("%d%d",&Row2,&Column2);
        printf("Enter Elements of Matrix 2:\n");
        for(i=0  ;i<Row2  ;i++ )
        {
                for(j=0 ;j<Column2 ;j++)
                {
                        scanf("%d",&Mat2[i][j]);
                }
        }
        printf("The Elements of Matrix 1:\n");
        for(i=0  ;i<Row1  ;i++ )
        {
                for(j=0 ;j<Column1 ;j++)
                {
                        printf("%d  ",Mat1[i][j]);
                }
                printf("\n");
        }
        printf("The Elements of Matrix 2:\n");
        for(i=0  ;i<Row2  ;i++ )
        {
                for(j=0 ;j<Column2 ;j++)
                {
                        printf("%d  ",Mat2[i][j]);
                }
                printf("\n");
        }
	if(Column1==Row2)
	{
        	printf("The product  of the Elements of Matrix 1 and 2 is:\n");
        	for(i=0  ;i<Row1  ;i++ )
        	{
                	for(j=0 ;j<Column2 ;j++)
                	{	
				Add=0;
				for(k=0 ;k<Column2 ;k++)
				{
                        		Add=Add+Mat1[i][k]*Mat2[k][j];
				}
				printf("%-3d  ",Add);		
			}
               		printf("\n");
        	}
	}
	else
		printf("The matrix multiplication cannot be done:\n");
}

