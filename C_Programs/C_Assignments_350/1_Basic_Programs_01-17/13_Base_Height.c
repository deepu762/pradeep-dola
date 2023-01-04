#include<stdio.h>

void main()
{
	float Base,Height,Area;
	printf("Enter Base and Height of traingle \n");
	scanf("%f%f",&Base,&Height);
	Area=0.5*Base*Height;
	printf("The Area of the traingle of the given base %0.2f and height %0.2f is %0.4f\n",Base,Height,Area);
}
