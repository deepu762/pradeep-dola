#include<stdio.h>

void main()
{
	int a=-3;
	a=-a-a+!a;			/*a=--3--3+0,a=6*/
	printf("%d\n",a);
}

