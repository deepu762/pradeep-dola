#include<stdio.h>

void main()
{
        int a=10;
	a=a++;						/*   a=a+1=  10+1=   11	*/
	a=a++ * a--;					/*	11 *11 = 121    */
	printf("%d\n",a);				/*	a=121		*/
	printf("%d\n",a++ * a++);			/**/	
}
