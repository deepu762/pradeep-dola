#include<stdio.h>

void main()
{
	int Number,Number1,Number2=0,Rem,Rev=0;
	printf("Enter any number\n");
	scanf("%d",&Number);
	Number1=Number;
	while(Number>0)
	{
		Rem=Number%10;
		Rev=Rev*10+Rem;
		Number/=10;
	}
	while(Rev>0)
	{
		Rem=Rev%10;
		Number2=Number2*10+Rem+1;
		Rev/=10;
	}
	printf("The given number is %d and the new number is %d \n",Number1,Number2);
}

