#include<stdio.h>

void main()
{
	int a=2,b=1,c,d;
	c=a<b;						/*c=0*/
	d=(a>b)&&(c<b);					/* a>b=1,c<b=1,d=1&&1=1(and operator)*/
	printf("C=%d,d=%d\n",c,d);			/*c=0,d=1*/
}	
