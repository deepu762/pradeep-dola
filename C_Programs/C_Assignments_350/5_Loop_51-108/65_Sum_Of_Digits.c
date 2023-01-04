#include<stdio.h>

void main()
{
	int Num,Num1,Sum=0,Rem=0;
	printf("Enter a number to find sum of it's digits \n");
	scanf("%d",&Num);
	Num1=Num;
	while(Num1>0)
	{
		Rem=Num1%10;
		Sum=Sum+Rem;
		Num1=Num1/10;
	}
	printf("Sum of the digits of the number %d is %d\n",Num,Sum);
}
