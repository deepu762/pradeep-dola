#include<stdio.h>

void main()
{
	enum Day{Monday ,Tuesday ,Wednesday ,Thursday=7 ,Friday ,Saturday, Sunday};
	printf("%d\n",Monday);
	//enum Day1{Monday ,Tuesday ,Wednesday=4 ,Thursday ,Friday=6 ,Saturday, Sunday};
	printf("%d\n",Saturday);
}
