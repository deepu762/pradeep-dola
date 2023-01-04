#include<stdio.h>

void main()
{
	int a=5,b=6;
	printf("%d\t",a=b);			/*	a=6	*/
	printf("%d\t",a==b);			/*	a==b=1	*/
	printf("%d\t%d\n",a,b);			/*	a=6,b=6		*/
}

