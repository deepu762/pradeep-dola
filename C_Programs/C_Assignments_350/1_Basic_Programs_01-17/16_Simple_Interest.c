#include<stdio.h>

void main()
{
	float Simple_Interest,Principal,Time,Rate;
	printf("Enter Principal,Rate and Time \n");
	scanf("%f%f%f",&Principal,&Rate,&Time);
	Simple_Interest=(Principal*Rate*Time)/100;
	printf("The simple interest for the given principal %0.2f ,Time %0.2f and Rate %0.2f is %0.4f \n",Principal,Rate,Time,Simple_Interest);
}
