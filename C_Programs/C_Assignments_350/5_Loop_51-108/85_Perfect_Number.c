#include<stdio.h>

void main()
{
	int i=1,Number,c=0;
	printf("Enter a number to check whether it is a perfect Number or not. \n");
	scanf("%d",&Number);
	while(i<Number)
	{
		if(Number%i==0)
		c+=i;
		i++;
	}
	Number==c?printf("%d is a perfect number.\n",Number):printf("%d is not a perfect number.\n",Number);
}
