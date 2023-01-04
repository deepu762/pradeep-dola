//#include<stdio.h>

void main()
{
	int x=8,y,z;
	x=8++;						/*constant wont increase*/
	y=++x++;					/*x not declared,so no value*/
	z=(x+y);					/*x and y has no values no operation can be done*/
	printf("x=%d,y=%d,z=%d\n",x,y,z);		/*x,y,z=no values*/
}

//
