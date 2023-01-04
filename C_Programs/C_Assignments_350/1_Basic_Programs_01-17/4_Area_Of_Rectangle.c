#include<stdio.h>

void main()
{
	float l,b,area;
	printf("enter length and breadth of the rectangle \n");
	scanf("%f%f",&l,&b);
	area=l*b;
	printf("The area of given length %0.2f meters and breadth %0.2f is %f \n",l,b,area);
}
