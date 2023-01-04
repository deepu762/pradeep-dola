#include<stdio.h>

void main()
{
	float cm,m,km;
	printf("Enter length in centimeter \n");
	scanf("%f",&cm);
	m=cm/100;
	km=cm/100000;
	printf("The given length of %0.3f cm in meters is %f m \n",cm,m);
	printf("The given length of %0.3f cm in kilometer is %f km \n",cm,km);
}

