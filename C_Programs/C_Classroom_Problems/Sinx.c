#include<stdio.h>

void main()
{
	int x1,Acc,i;
	float x,Term,Sum;
	printf("Enter any value to calculate the sinx and the number of terms for accuracy\n");
	scanf("%f%d",&x,&Acc);
	x1=x;		;
	x=x*3.14159/180;
	Term=x;
	Sum=x;
	for(i=1;i<=Acc;i++)
	{
		Term=(Term*(-1)*x*x)/(2*i*(2*i+1));
		Sum=Sum+Term;
	}
	printf("The value of sin(%d)is %0.4f",x1,Sum);
}
