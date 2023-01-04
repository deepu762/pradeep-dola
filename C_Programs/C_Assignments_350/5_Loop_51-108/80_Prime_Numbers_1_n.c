#include<stdio.h>

void main()
{
	int i=2,j=1,c=0,Number;
	printf("Enter a number \n");
	scanf("%d",&Number);
	printf("The prime numbers upto %d is/are ",Number);
	while(i<=Number)
	{
		j=1;
		c=0;
		while(j<=i)
		{
			if(i%j==0)
			{
			c++;
			}
			j++;
		}
		if(c<=2)
		printf("%d,",i);
		i++;
	}
	printf("\n");
}

