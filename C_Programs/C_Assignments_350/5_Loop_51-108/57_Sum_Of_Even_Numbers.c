#include<stdio.h>

void main()
{
	int i=0,c=0,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(i<=n)
	{
		c=c+i;
		i+=2;
	}
	printf("The sum of all even numbers upto %d is %d\n",n,c);
}
