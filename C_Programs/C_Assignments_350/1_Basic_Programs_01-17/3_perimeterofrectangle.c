#include<stdio.h>

void main()
{
	float l,b,perimeter;
	printf("enter length and breadth of rectangle\n");
       	scanf("%f%f",&l,&b);
	perimeter=2*(l+b);
	printf("The perimeter of the given length %0.2f meters and breadth %0.2f meters is %0.2f square meters\n",l,b,perimeter);
}
