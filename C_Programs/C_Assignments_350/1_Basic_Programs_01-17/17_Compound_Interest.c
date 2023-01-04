#include<stdio.h>
#include<math.h>

void main()
{
	float Compound_Interest,Principal,Rate,Time,Product,Power;
	printf("Enter Principal,Time and Rate \n");
	scanf("%f%f%f",&Principal,&Time,&Rate);
	Product=(1+Rate/100);
	Power=pow(Product,Time);
	Compound_Interest=Principal*(Power-1);
	printf("The Compound Interest for the given principal %0.3f is %0.3f \n",Principal,Compound_Interest);
}
