#include<stdio.h>

void main()
{
	float SP,CP,Profit;
	printf("Enter any values of selling price and cost price of the article\n");
	scanf("%f%f",&SP,&CP);
	Profit=SP-CP;
	if(Profit>0)
	{
		printf("Profit  gained is %0.2f",Profit);
	}
	else
	{
		printf("Loss is %0.2f",Profit);
	}
}
