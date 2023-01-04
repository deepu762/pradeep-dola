#include<stdio.h>

void main()
{
	int Number_1,Number_2;
	printf("Enter two numbers \n");
	scanf("%d,%d",&Number_1,&Number_2);
	Number_1>Number_2?printf("The difference between the numbers is %d",Number_1+Number_2):printf("The difference between the numbers is %d",Number_1-Number_2);
}
