#include<stdio.h>

void main()
{
	float a,b,sum,sub,mul;
	float div;
	printf("enter 2 numbers to find all the arithmetic operations\n");
	scanf("%f%f",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("The sum of the two numbers %0.0f and %0.0f is %0.0f \n",a,b,sum);
        printf("The difference of the two numbers %0.0f and %0.0f is %0.0f\n",a,b,sub);
	printf("The product of the two numbrs %0.0f and %0.0f is %0.0f\n",a,b,mul);
	printf("The division of the two numbers %0.0f and %0.0f is %0.3lf \n",a,b,div);
}	
