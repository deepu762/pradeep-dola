#include<stdio.h>

void main()
{
	int a=5,b=5;
	printf("%d,%d\t",++a,b--);				/*	a=6,b=5		*/
	printf("%d,%d\t",a,b);					/*	a=6,b=4		*/
	printf("%d,%d\t",++a,b++);				/*	a=7,b=4		*/
	printf("%d,%d\n",a,b);					/*	a=7,b=5		*/
}
