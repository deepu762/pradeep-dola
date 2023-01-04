#include<stdio.h>

void main()
{
	int n,i=1,c=0;
	printf("Enter a number \n");
	scanf("%d",&n);
	while(i<=n)
	{
		c=c+i;
		i+=2;
	}
	printf("Sum of %d odd numbers is %d",n,c);
}
