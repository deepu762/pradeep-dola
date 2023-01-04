#include<stdio.h>

void main()
{
        int Mat[20][20],i,j,Add=0,Row,Column;
        printf("Enter Row size and coloumn size of matrix:\n");
        scanf("%d%d",&Row,&Column);
        printf("Enter Elements of Matrix:\n");
        for(i=0  ;i<Row ;i++  )
        {
                for(j=0 ;j<Column ;j++)
                {
                        scanf("%d",&Mat[i][j]);
                }
        }
        printf("The Elements of Matrix:\n");
        for(i=0  ;i<Row  ;i++ )
        {
                for(j=0 ;j<Column ;j++)
                {
                        printf("%d  ",Mat[i][j]);
                }
                printf("\n");
        }
        for(i=0  ;i<Row ;i++ )
        {
                for(j=0 ;j<Column ;j++)
                {	
			Add=Add+Mat[i][j];
		}
        }
	printf("The sum of all elements of the matrix is %d\n",Add);
}

