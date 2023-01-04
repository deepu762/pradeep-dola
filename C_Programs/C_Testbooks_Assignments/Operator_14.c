#include<stdio.h>

void main()
{
	int a=5,b=10,temp;
	temp=a,a=b,b=temp;			/* 	temp=5,a=10,b=5	 	*/
	printf("a=%d\tb=%d\n",a,b);		/*	a=10  b=5		*/
}
