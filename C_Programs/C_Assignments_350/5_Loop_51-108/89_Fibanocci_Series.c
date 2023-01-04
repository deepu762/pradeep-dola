#include<stdio.h>

void main()
{
	int Fibvalue1=0,Fibvalue2=1,Fibvalue3,InitValue=1,InputNum;
	printf("Enter a number to print fibonacci series upto the given number:\n");
	scanf("%d",&InputNum);
	printf("Fibonacci series \n%d %d ",Fibvalue1,Fibvalue2);
		for(InitValue=1;InitValue<=InputNum-2;InitValue++)
		{
			Fibvalue3=Fibvalue1+Fibvalue2;
			printf("%d ",Fibvalue3);
			Fibvalue1=Fibvalue2;
			Fibvalue2=Fibvalue3;
		}
		printf("\n");		
}
