#include<stdio.h>

void main()
{
	int a,b,c,d;
	a=b=c=d=4;
	a*=b+1;				/*	a=a*b+1,	a=4*(4+1)=20	*/
	c+=d*=3;			/*	c+=d=d*3	c+=d=12   c=c+d c=12+4=16  */
	printf("a=%d,c=%d\n",a,c);	/*	a=17 ,c=16	*/
}
