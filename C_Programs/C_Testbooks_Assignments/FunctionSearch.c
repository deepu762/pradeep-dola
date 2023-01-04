#include<stdio.h>

void Input(void);
void Add(void);
void SUB(void);
void MUL(void);
int Array1[50][50],Array2[50][50],Result[50][50],i=0,j=0,Size;
void main()
{
	int Number;
	printf("Enter any number to find the following\n");
	printf("1-Addition\n2-Subtraction\n3-Multiplication\n");
        scanf("%d",&Number);
        Array();
        {
                switch(Number)
                {
                        case 1:
                                {
                                        ADD()
                                        break;
                                }
                        case 2:
                                {
                                        SUB()
                                        break;
                                }
                        case 3:
                                {
                                        MUL()
                                        break;
                                }

                        default()
                                {
                                        printf("Entered input is not valid");
                                        break;
                                }
                }
        }while(Number>=1&&Number<=3);	

void Input(void)
	printf("Enter size for both arrays:\n");
	scanf("%d",&Size);
	printf("Enter Array1 Elements\n");
	for(i=0;  i<Size;  i++)
	{
		for(j=0 ;j<Size  ;j++)
		{
			scanf("%d",&Array1[i][j]);
		}
	}
	printf("Enter Array2 Elements\n");
        for(i=0;  i<Size;  i++)
        {
                for(j=0 ;j<Size  ;j++)
                {
                        scanf("%d",&Array2[i][j]);
                }
        }
	printf("Enter Array1 Elements\n");
        for(i=0;  i<Size;  i++)
        {
                for(j=0 ;j<Size  ;j++)
                {
                        printf("%d ",&Array1[i][j]);
                }
		printf("\n");
        }
	printf("Enter Array2 Elements\n");
        for(i=0;  i<Size;  i++)
        {
                for(j=0 ;j<Size  ;j++)
                {
                        printf("%d ",&Array2[i][j]);
                }
                printf("\n");
        }
}
void ADD()
{
	for(i=0; i<size; i++)
	{
		for(j=0;  j<size;  j++)
		{
			Res[i][j]=Array1[i][j]+Array2[i][j];
		}
	}
	printf("Addition of both arrays is\n:")
	for(i=0; i<size; i++)
        {
                for(j=0;  j<size;  j++)
                {
                        printf("%d ",Res[i][j]);
                }
		printf("\n");
        }
}

void SUB()
{
        for(i=0; i<size; i++)
        {
                for(j=0;  j<size;  j++)
                {
                        Res[i][j]=Array1[i][j]-Array2[i][j];
                }
        }
        printf("Addition of both arrays is\n:")
        for(i=0; i<size; i++)
        {
                for(j=0;  j<size;  j++)
                {
                        printf("%d ",Res[i][j]);
                }
                printf("\n");
        }
}
void MUl()
{
        for(i=0; i<size; i++)
        {
                for(j=0;  j<size;  j++)
                {
			for(k=0; k<size; k++)
			{
                        Res[i][j]=Res[i][j]+Array1[i][k]*Array2[k][i];
                }
        }
        printf("Addition of both arrays is\n:")
        for(i=0; i<size; i++)
        {
                for(j=0;  j<size;  j++)
                {
                        printf("%d ",Res[i][j]);
                }
                printf("\n");
        }
}

