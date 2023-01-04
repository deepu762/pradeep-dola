#include<stdio.h>

void main()
{
	int a=14,b,c;
	a=a%5;						/*a=14%5  =4 */
	b=a/3;						/*a=2/3  =1 */
	c=a/5%3;					/*c=2/5%3=0 */
	printf("a=%d,b=%d,c=%d\n",a,b,c);
}
