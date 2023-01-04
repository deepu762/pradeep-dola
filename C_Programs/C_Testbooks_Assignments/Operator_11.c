#include<stdio.h>

void main()
{
	float b;
	b=15/2;						/*   b=int/int=15/2=7	*/
	printf("%f\t",b);				/*   b=7		*/
	b=(float)15/2+(15/2);				/*   b=7.5 + 7 =15.5	*/
	printf("%f\n",b);				/*   b=15.5		*/
}
