#include<stdio.h>

void main()
{        
	int Number,CopyNumber,Product=1,SumOfFact=0,Remiander,Incremental=1;
	printf("Enter a Number to check whether it is Strong number or not:\n");
	scanf("%d",&Number);
	CopyNumber=Number;
	while(Number!=0)
	{
		Remiander=Number%10;
		Product=1;
		while(Remiander>0)
		{
			Product=Product*Remiander;
			Remiander--;
		}
		SumOfFact=SumOfFact+Product;
		Number/=10;
	}
	SumOfFact==CopyNumber?printf("%d is a Strong Number\n",CopyNumber):printf("%d is not a Strong Number\n",CopyNumber);	
}

	
	
