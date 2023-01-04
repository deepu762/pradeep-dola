#include<stdio.h>

void main()
{
	float Angle_1,Angle_2,Angle_3,Total;
	printf("Enter 3 Angles of the triangle\n");
        scanf("%f%f%f",&Angle_1,&Angle_2,&Angle_3);
	Total=Angle_1+Angle_2+Angle_3;
	if (Total==180)
	{
	if((Angle_1==60)&&(Angle_2==60)&&(Angle_3==60))
	{
		printf("The Triange is Equilateral \n");
	}
	else if((Angle_1==Angle_2)||(Angle_1==Angle_3)||(Angle_2==Angle_3))
	{
		printf("The Triangle is Isocless\n");
	}
	else if((Angle_1!=Angle_2)&&(Angle_2==Angle_3)&&(Angle_3==Angle_1))
	{
		printf("The traingle is scalene\n");
	}
	}
	else
	{
		printf("The triangle is not valid\n");
	}
}
