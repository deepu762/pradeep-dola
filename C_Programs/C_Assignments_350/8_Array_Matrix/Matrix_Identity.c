#include<stdio.h>

void main()
{
        int Mat[20][20],Size,i,j,Count=0,Count1=0;
        printf("Enter Row size and column size of Matrix:\n");
        scanf("%d",&Size);
        printf("Enter Elements of Matrix:\n");
        for(i=0  ;i<Size  ;i++  )
        {
                for(j=0 ;j<Size ;j++)
                {
                        scanf("%d",&Mat[i][j]);
                }
        }
        printf("The Elements of Matrix:\n");
        for(i=0  ;i<Size  ;i++ )
        {
                for(j=0 ;j<Size ;j++)
                {
                        printf("%d  ",Mat[i][j]);
                }
                printf("\n");
        }
        for(i=0  ;i<Size ;i++ )
        {
                for(j=0 ;j<Size;j++)
                {
			if((i==j)&&(Mat[i][j]==1))
			{
				Count++;
			}
			else if(Mat[i][j]==0)
			{
				Count1++;
			}
                }
        }
	if((Count==Size) && (Count1==(Size*(Size-1))))
		printf("The given matrix is an Identity Matrix:\n");
	else
		printf("The given matrix is not an Identity matrix:\n");
}

