#include<stdio.h>

void main()
{
	int Number;
	printf("Enter a Number\n");
	scanf("%d",&Number);
	if(Number%55==0)
		{
		 printf("The nnumber %d is divisible by both 5 and 11\n",Number);
		}
	else
		{
		printf("The number %d is not divisble by both 5 and 11\n",Number);
	        }
}
