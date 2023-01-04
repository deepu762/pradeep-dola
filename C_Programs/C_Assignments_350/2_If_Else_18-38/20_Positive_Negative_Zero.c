#include<stdio.h>

void main()
{
	int Number_1;
	printf("Enter a number\n");
	scanf("%d",&Number_1);
	if(Number_1>=0)
		{
			if (Number_1>0)
		     	{	
		     	printf("Number is positive\n");
		     	}
			else
			{
			printf("Number is zero\n");
			}
		}
	else
	        	{	
	 		printf("Number is negative\n");	
		        }
}	

