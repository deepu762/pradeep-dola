#include<stdio.h>
#define pi 3.14
void main()
{
	float Radius_Of_Circle,Area_Of_Circle,Perimeter_Of_Circle;
	printf("Enter radius of the circle \n");
        scanf("%f",&Radius_Of_Circle);
	Area_Of_Circle = pi * Radius_Of_Circle * Radius_Of_Circle;
	Perimeter_Of_Circle = 2 * pi * Radius_Of_Circle * Radius_Of_Circle;
	printf("The area of the circle is %0.2f\nThe perimeter of the circle is %0.2f\n ",Area_Of_Circle,Perimeter_Of_Circle);
}	
