#include<stdio.h>

void main()
{
	int Number,Remiander;
	printf("Enter a number\n");
	scanf("%d",&Number);
	Remiander=Number%2;
	if(Remiander==0)
		{
		printf("%d is even\n",Number);
		}
	else
		{
		printf("%d is odd\n",Number);
		}
}
