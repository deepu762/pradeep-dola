#include<stdio.h>

void main()
{
	int x,y,z,k=10;
	k+=(x=5,y=x+2,z=x+y);				/*x=5,y=7,z=5+7=12,k=k+12  k=10+12=22 */
	printf("x=%d,y=%d,z=%d,k=%d\n",x,y,z,k);	/*x=5,y=7,z=12,k=22	*/
}
