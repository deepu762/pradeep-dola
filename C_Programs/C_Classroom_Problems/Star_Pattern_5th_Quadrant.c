#include<stdio.h>

void main()
{
	int i,j,k,Number;
	printf("Enter a number");
	scanf("%d",&Number);
	for(i=1;i<=Number;i++)
	{
	   for(j=Number;j>i;j--)
	   {
	       printf(" ");
	   }
		for(k=1;k<i;k++)
		{
		    printf("*");
	       	}
			printf("\n");
	}
}
