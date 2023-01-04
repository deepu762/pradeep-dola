#include<stdio.h>

void main()
{
	int Num,C;
	printf("Enter a number\n");
	scanf("%d",&Num);
	C=Num%10;
	while(Num>10)
	{
	Num/=10;
	}
	printf("The first digit and last digit is %d and %d",Num,C);
}
