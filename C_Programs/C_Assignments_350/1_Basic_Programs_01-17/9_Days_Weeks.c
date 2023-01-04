#include<stdio.h>

void main()
{
	int d,y1,y2,w1,w2;
	printf("Enter number of days\n");
	scanf("%d",&d);
	y1=d/365;
	y2=d%365;
	w1=y2/7;
	w2=y2%7;
	printf("The number of years,weeks,days for the given days %d is %d year/years,%d week/weeks %d day/days\n",d,y1,w1,w2);
}
