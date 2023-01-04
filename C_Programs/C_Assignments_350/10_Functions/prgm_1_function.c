#include<stdio.h>

void sum(void);				//declaration//
void main()
{
	sum();				//function calling//
}

void sum()				//function definition)//
{
	int a,b,Sum;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	Sum=a+b;
	printf("The addition is %d\n",Sum);
}
