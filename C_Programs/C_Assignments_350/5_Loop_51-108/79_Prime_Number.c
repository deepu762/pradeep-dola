#include<stdio.h>

void main()
{
	int Number,i=1,c=0;
	printf("Enter a number to find whether it is a prime or not\n");
	scanf("%d",&Number);
	while(i<=Number)
	{	
		if((Number%i)==0)
		{	
		c++;
		}
		i++;
	}
	c<=2?printf("%d is a prime number \n",Number):printf("%d is not a prime number \n",Number);

}
