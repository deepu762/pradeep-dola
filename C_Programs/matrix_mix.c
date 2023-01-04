#include<stdio.h>
void main()
{
	int A[5],B[5],c[10],i,j,k=0;
	printf("Enter Matrix A elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter Matrix B elements\n");
        for(i=0;i<5;i++)
        {
                scanf("%d",&B[i]);
        }
	for(i=0 ;i<5;i++)
	{
		for(j=0 ;j<5;j++)
		{
			if(A[i]==B[j])
			{
				c[k]=A[i];
				k++;
			}

		}
	}
	printf("The common elements in the two matrix are \n%d ",c[0]);
	for(i=0;i<k-1;i++)
	{
		if(c[0]!=c[i+1])
		{
		  printf("%d ",c[i+1]);
		}
	}
}


