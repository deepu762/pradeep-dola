#include<stdio.h>
#define COND 100

void main()
{
	 int a=20,b=4;
	 #if COND>=50 
		printf("value is greater");
		a=a+b;
		b=a-b;
		printf("value of variables have changed");
	 #endif
		printf("a=%d,b=%d\n",a,b);
}
