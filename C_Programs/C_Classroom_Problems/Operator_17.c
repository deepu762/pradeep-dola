#include<stdio.h>

void main()
{
	int a=3,b=4,c=3,d=4,x,y;                                      
	x=(a=5)&&(b+7);						/* x=5 && 11 = 1*/
	y=(c=5)||(d=8);						/*y=  5||8   =1 */
	printf("a=%d,b=%d,c=%d,d=%d,x=%d,y=%d \n",a,b,c,d,x,y);	/*a=5,b=4,c=5,d=8,x=1,y=1*/
	x=(a==6)&&(b=9);					/*x= 0&&9=1 */
        y=(c==6)||(d=10);					/*y=  0||10   =1 */
	printf("a=%d,b=%d,c=%d,d=%d,x=%d,Y=%d \n",a,b,c,d,x,y);	/*a=5,b=9,c=5,d=10,x=1,y=1*/

}
