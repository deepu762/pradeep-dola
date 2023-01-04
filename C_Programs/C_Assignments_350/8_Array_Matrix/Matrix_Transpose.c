#include<stdio.h>

void main()
{
        int Mat1[20][20],Transpose[20][20],Row,Column,i,j;
        printf("Enter Row size and column size of Matrix:\n");
        scanf("%d%d",&Row,&Column);
        printf("Enter Elements of Matrix:\n");
        for(i=0  ;i<Row  ;i++  )
        {
                for(j=0 ;j<Column ;j++)
                {
                        scanf("%d",&Mat1[i][j]);
                }
        }
        printf("The Elements of Matrix:\n");
        for(i=0  ;i<Row  ;i++ )
        {
                for(j=0 ;j<Column ;j++)
                {
                        printf("%d  ",Mat1[i][j]);
                }
                printf("\n");
        }
        for(i=0  ;i<Row  ;i++ )
        {
                for(j=0 ;j<Column ;j++)
                {
			Transpose[j][i]=Mat1[i][j];
                }
        }
	printf("The Transpose of the given matrix is:\n");
	for(i=0  ;i<Column  ;i++ )
        {
                for(j=0 ;j<Row ;j++)
                {
                        printf("%d ",Transpose[i][j]);
                }
                printf("\n");
        }
}

