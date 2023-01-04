#include<stdio.h>

void main()
{
        int A[20][20],Row,Column,temp,Num,i,j,k;
        printf("Enter the number of rows and coloumns of the Array:\n");
        scanf("%d%d",&Row,&Column);
        printf("Enter the Array Elements:\n");
        for(i=0 ;i<Row ;i++ )
        {
                for(j=0 ;j<Column ;j++)
                {
                        scanf("%d",&A[i][j]);
                }
        }
        printf("The matrix with the given elements is\n");
        for(i=0 ;i<Row ;i++ )
        {
                for(j=0 ;j<Column ;j++)
                {
                        printf("%d ",A[i][j]);
                }
                printf("\n");
        }
        for(i=0 ;i<Row ;i++)
        {
                for(j=0 ;j<Column ;j++)
                {
                        for(k=j+1 ;k<Column ;k++)
                        {
                                if(A[i][j]>A[i][k])
                                {
                                        temp=A[i][k];
                                        A[i][k]=A[i][j];
                                        A[i][j]=temp;
                                }
                        }
                }
        }
        printf("The ascending order of the given matrix is:\n");
        for(i=0  ;i<Row  ;i++)
        {
                for(j=0 ;j<Column;j++)
                {
                printf("%d ",A[i][j]);
                }
                printf("\n");
        }
}

