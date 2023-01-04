#include<stdio.h>

void main()
{
	int Mat1[20][20],Mat2[20][20],Add[20][20],Row,Column,i,j;
	printf("Enter Row size and column size of Matrix 1 and Matrix 2:\n");
	scanf("%d%d",&Row,&Column);
	printf("Enter Elements of Matrix 1\n");
	for(i=0  ;i<Row  ;i++  )
	{
		for(j=0 ;j<Column ;j++)
		{
			scanf("%d",&Mat1[i][j]);
		}
	}
	printf("Enter Elements of Matrix 2:\n");
	for(i=0  ;i<Row  ;i++ )
        {
                for(j=0 ;j<Column ;j++)
                {
                        scanf("%d",&Mat2[i][j]);
                }
        }
	printf("The Elements of Matrix 1:\n");
	for(i=0  ;i<Row  ;i++ )
        {   
		for(j=0 ;j<Column ;j++)
                {
                        printf("%d  ",Mat1[i][j]);
                }
		printf("\n");
        }
	printf("The Elements of Matrix 2:\n");
        for(i=0  ;i<Row  ;i++ )
        {	
                for(j=0 ;j<Column ;j++)
                {
                        printf("%d  ",Mat2[i][j]);
                }
		printf("\n");
	}
	printf("The additiom of the Elements of Matrix 1 and 2 is:\n");
	for(i=0  ;i<Row  ;i++ )
        {
                for(j=0 ;j<Column ;j++)
                {	
			Add[i][j]=Mat1[i][j]+Mat2[i][j];
                        printf("%-3d  ",Add[i][j]);
                }
		printf("\n");
	}
}
