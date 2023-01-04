#include<stdio.h>

void main()
{
        int Mat1[20][20],Mat2[20][20],i,j,Size,Temp;
        printf("Enter size of Matrix 1:\n");
        scanf("%d",&Size);
        printf("Enter Elements of Matrix 1\n");
        for(i=0  ;i<Size  ;i++  )
        {
                for(j=0 ;j<Size ;j++)
                {
                        scanf("%d",&Mat1[i][j]);
                }
        }
        printf("Enter Elements of Matrix 2:\n");
        for(i=0  ;i<Size  ;i++ )
        {
                for(j=0 ;j<Size ;j++)
                {
                        scanf("%d",&Mat2[i][j]);
                }
        }
        printf("The Elements of Matrix 1:\n");
        for(i=0  ;i<Size  ;i++ )
        {
                for(j=0 ;j<Size ;j++)
                {
                        printf("%d  ",Mat1[i][j]);
                }
                printf("\n");
        }
        printf("The Elements of Matrix 2:\n");
        for(i=0  ;i<Size  ;i++ )
        {
                for(j=0 ;j<Size ;j++)
                {
                        printf("%d  ",Mat2[i][j]);
                }
                printf("\n");
        }
        printf("The Swapped Elements of Matrix 1 is:\n");
        for(i=0  ;i<Size  ;i++ )
        {
                for(j=0 ;j<Size ;j++)
                {
                        Temp=Mat1[i][j];
			Mat1[i][j]=Mat2[i][j];
			Mat2[i][j]=Temp;
                        printf("%-3d  ",Mat1[i][j]);
                }
                printf("\n");
        }
}

