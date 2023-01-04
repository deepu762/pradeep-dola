#include<stdio.h>

void main()
{
	float Units,Power_Cost;
	printf("Enter no of units consumed \n");
	scanf("%f",&Units);
	if(Units<=50)
	{
		Power_Cost=25;
	}
	else if((Units>50)&&(Units<=150))
        {       
                Power_Cost=(25+(Units-50)*0.75);
        }       
	else if((Units>150)&&(Units<=250))
        {       
                Power_Cost=(25+(100*0.75)+(Units-150)*1.20);
        }       
	else
        {
                Power_Cost=(25+(100*0.75)+(100*1.20)+(Units-250)*1.50);
	}
	Power_Cost=Power_Cost*0.20+Power_Cost;
	printf("The total powercost for %0.2f units is %0.2f",Units,Power_Cost);
}
