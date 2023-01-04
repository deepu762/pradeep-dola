/*
********************Bubble sort Ascending**************************
*/

#include<stdio.h>

void main()
{
	int A[20],temp,Num,i,j;
	printf("Enter the number of elements:\n");
	scanf("%d",&Num);
	printf("Enter the Array Elements:\n");
	for(i=0 ;i<Num ;i++ )
	{
		scanf("%d",&A[i]);
	}
	for(i=0 ;i<Num ;i++)
	{
		for(j=i+1 ;j<Num ;j++)
		{
			if(A[i]>A[j])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	printf("\nThe ascending order of the given numbers is:");
	for(i=0  ;i<Num  ;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");


}



