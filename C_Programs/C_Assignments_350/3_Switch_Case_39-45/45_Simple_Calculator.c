#include<stdio.h>

void main()
{
	int Num1,Num2,Sum;
	char c;
	printf("Enter two numbers and required operation +,-,/,* \n");
	scanf("%d%d%c",&Num1,&Num2,&c);
	switch(c)
	{
	case '+':
		{
		Sum=Num1+Num2;
		printf("%d",Sum);
		break;
		}
	case '-':
                {
                Sum=Num1-Num2;
                printf("%d",Sum);
                break;
                }
	case '*':
                {
                Sum=Num1*Num2;
                printf("%d",Sum);
                break;
                }
	case '/':
                {
                Sum=Num1/Num2;
                printf("%d",Sum);
                break;
                }
	default:
		{
		printf("not a valid operator");
		}
	}
}
