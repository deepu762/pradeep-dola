#include<stdio.h>

void main()
{
        int Mat[20][20],Sum_Of_Diagonal=0,Size,i,j;
        printf("Enter Size of Matrix:\n");
        scanf("%d",&Size);
        printf("Enter Elements of Matrix:\n");
        for(i=0  ;i<Size  ;i++  )
        {
                for(j=0 ;j<Size ;j++)
                {
                        scanf("%d",&Mat[i][j]);
                }
        }
        printf("The Elements of Matrix are:\n");
        for(i=0  ;i<Size  ;i++ )
        {
                for(j=0 ;j<Size ;j++)
                {
                        printf("%d  ",Mat[i][j]);
                }
                printf("\n");
        }
        for(i=0  ;i<Size  ;i++ )
        {      
             	Sum_Of_Diagonal=Sum_Of_Diagonal+Mat[i][i];
             
        }
        printf("The Sum of the main diagonal of the given matrix is %d.\n",Sum_Of_Diagonal);
}

