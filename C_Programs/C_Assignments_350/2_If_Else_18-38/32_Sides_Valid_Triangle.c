#include<stdio.h>

void main()
{
	float Side_1,Side_2,Side_3;
	printf("Enter the three sides of the triangle\n");
	scanf("%f%f%f",&Side_1,&Side_2,&Side_3);
	if(((Side_1+Side_2)>Side_3)&&((Side_2+Side_1)>Side_2)&&((Side_1+Side_2)>Side_3))
	{
		printf("The traingle is valid\n");
	}
	else
	{
		printf("The traingle is not valid\n");

	}
}
