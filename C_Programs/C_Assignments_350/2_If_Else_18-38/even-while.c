#include<stdio.h>

void main()
{
	int sum=0,n;
	printf("Enter n value: \n");
	scanf("%d",&n);
	while(n>sum)
	{
		sum=sum+n;
		n--;
	}
	printf("%dsum of all even numbers",sum);
}
