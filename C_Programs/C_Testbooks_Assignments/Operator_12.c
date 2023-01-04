#include<stdio.h>

void main()
{
	int a=9;
	char ch='A';
	a=a+ch+24;					/*a=9+65+24=98*/
	printf("%d\t%c\t%d\t%c\n",ch,ch,a,a);	/*ch=65,ch=A,a=98,b */
}
