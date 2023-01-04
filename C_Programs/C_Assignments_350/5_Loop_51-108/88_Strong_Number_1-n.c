#include<stdio.h>

void main()
{
        int Number,Product=1,SumOfFact=0,Remiander,Incremental=1,Incremental1;
        printf("Enter a number to print strong numbers from 1 to given number :\n");
        scanf("%d",&Number);
        printf("The Strong Numbers from 1 to %d is ",Number);
        while(Incremental<=Number)
        {
		Incremental1=Incremental;
		SumOfFact=0;
        	while(Incremental1>0)
			{
        		Remiander=Incremental1%10;
                	Product=1;
               		while(Remiander>0)
                	{
                        	Product=Product*Remiander;
                        	Remiander--;
               		}
                		SumOfFact=SumOfFact+Product;
                		Incremental1/=10;
        		}
        			if(SumOfFact==Incremental)
                		printf("%d,",Incremental);
                		Incremental++;
        }
}

