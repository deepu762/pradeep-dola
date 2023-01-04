#include<stdio.h>
#define add(x,y) (x*y)
void main()
{
	int a,b,c;
 	printf("Enter Two numbers\n");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("product is %d",c);
}
