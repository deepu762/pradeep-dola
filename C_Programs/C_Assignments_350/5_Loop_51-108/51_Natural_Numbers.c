#include<stdio.h>

void main()
{
	int n,i=1;
	printf("Enter a maximum number to print natural numbers upto\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);
		i++;
	}
		printf("\n");
}
