#include<stdio.h>

void main()
{
	int number,remainder;
	printf("Enter the number\n");
	scanf("%d",&number);
	remainder=number%3;
	printf("The remainder of the number %d after divided by 3 is %d",number,remainder);
}
