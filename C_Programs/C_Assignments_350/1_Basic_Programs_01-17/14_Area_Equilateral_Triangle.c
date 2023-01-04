#include<stdio.h>

void main()
{
	float Side,Area;
	printf("Enter side of the triangle \n");
	scanf("%f",&Side);
	Area=1.732*(Side*Side)/4;
	printf("The area of the equilateral triangle of the side %0.2f is %0.4f \n",Side,Area);
}
