#include<stdio.h>

void main()
{
	float r,d,cir,area;
	printf("Enter radius of the circle \n");
	scanf("%f",&r);
	d=2*r;
	cir=2*3.14*r;
	area=3.14*r*r;
	printf("The diameter of the given radius %fm is %fm \n",r,d);
	printf("The diameter of the given radius %fm is %fm \n",r,cir);
	printf("The diameter of the given radius %fm is %fsquare meters \n",r,area);
}
