#include<stdio.h>
#include<math.h>

void main()
{
	int n,p,x;
	printf("Enter the number and power to be calculated");
	scanf("%d%d",&n,&p);
	x=pow(n,p);
	printf("The value of the given power %d of the number %d is %d \n",p,n,x);
}	
	
