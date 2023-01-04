#include<stdio.h>

void main()
{
	int a=2, b=2, x, y;
	x=4*(++a * 2 + 3);				/* x= 4 *( 3 * 2  + 3) =36 */
	y=4*(b++ * 2 + 3);				/* y= 4 *( 2 * 2  + 3)= 28 */
	printf("a=%d, b=%d,x=%d ,y=%d \n",a,b,x,y);     /* a = 3 ,b = 3 ,x = 36, y=28 */
}
