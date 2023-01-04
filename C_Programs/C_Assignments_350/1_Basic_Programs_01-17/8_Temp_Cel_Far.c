#include<stdio.h>

void main()
{
	float c,f;
	printf("Enter temperature in farenheit \n");
	scanf("%f",&f);
	c=((f-32)*5)/9;
	printf("The temperature in celsius for the given farenheit %0.3f farenheit is %0.3f degree celsius",f,c);
}
