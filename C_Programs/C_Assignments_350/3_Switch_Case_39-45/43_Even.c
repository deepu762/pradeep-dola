#include<stdio.h>

void main()
{
	int Num;
	printf("Enter a number \n");
	scanf("%d",&Num);
	switch(Num%2)
	{
	case 1:
		printf("%d is odd\n",Num);
		break;
	default:
		printf("%d is even\n",Num);
		break;
	}
}
