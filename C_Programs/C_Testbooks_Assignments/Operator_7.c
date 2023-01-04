#include<stdio.h>

void main()
{

	int a=4,b=8,c=3,d=9,z;
	z=a++ + ++b * c-- - --d;				/*		z=4+9*3-8=23 		*/
	printf("a=%d,b=%d,c=%d,d=%d,z=%d\n",a,b,c,d,z);		/*		a=5,b=9,c=2,d=8,z=23	*/
}
