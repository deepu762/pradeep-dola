#include<stdio.h>

void main()
{
	float Angle1,Angle2,Angle3;
	printf("Enter Angle1 and Angle2 of the triangle\n");
	scanf("%f%f",&Angle1,&Angle2);
	Angle3=180-Angle1-Angle2;
	printf("The third angle of the triangle is %0.2f\n",Angle3);
}
