#include<stdio.h>

void main()
{
	int i=1,c=0;
	while(i<=10)
	{
		c=c+i;
		i+=2;
	}
	printf("%d\n",c);
}
