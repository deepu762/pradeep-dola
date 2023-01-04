#include<stdio.h>

void main()
{
	int Year;
	printf("Enter a year to find whether it is leap year or not\n");
	scanf("%d",&Year);
	    if((Year%4==0)&&(Year%100!=0)||(Year%400==0))
		    printf("%d is a leap year\n",Year);
	    else
		    printf("%d is not a leap year\n",Year);
}	
