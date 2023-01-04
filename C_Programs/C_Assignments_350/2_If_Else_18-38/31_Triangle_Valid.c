#include<stdio.h>

void main()
{
	float Angle_1,Angle_2,Angle_3,Total;
	printf("Enter 3 angles of traingle\n");
	scanf("%f%f%f",&Angle_1,&Angle_2,&Angle_3);
	Total=Angle_1+Angle_2+Angle_3;
	if(Total!=180)
	{
		printf("The sum of the angles is %0.2f degrees and the triangle is not valid \n",Total);
	}
	else
	{
		printf("The sum of the angles is %0.2f degrees and the triangle is valid \n",Total);
	}
}
