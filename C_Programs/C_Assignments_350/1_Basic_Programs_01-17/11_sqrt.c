#include<stdio.h>
#include<math.h>

void main()
{
	float n,s;
	printf("Enter the number to find the square root\n");
	scanf("%f",&n);
	s=sqrt(n);
	printf("The square root of the given number %0.0f is %f\n",n,s);
}
