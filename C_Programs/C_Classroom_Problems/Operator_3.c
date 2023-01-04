#include<stdio.h>

void main()
{
	int a=9,b=15,c=16,d=12,e,f;
	e=!(a<b||b<c);				/*	e=a<b=0||b<c=1=1   0	*/
	f=(a>b)?a-b:b-a;			/*	f=9>15 condition false,,expresssion2=b-a=7	*/
	printf("e=%d,f=%d\n",e,f);		/*	e=1,f=6			*/
}
	
