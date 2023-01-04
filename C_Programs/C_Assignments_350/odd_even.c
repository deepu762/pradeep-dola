#include<stdio.h>

void main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	if((num/2)*2==num)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
}
