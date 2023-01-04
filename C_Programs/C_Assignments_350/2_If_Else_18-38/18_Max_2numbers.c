#include<stdio.h>

void main()
{
	int Number_1,Number_2,Bigger;
	printf("Enter two numbers \n");
	scanf("%d%d",&Number_1,&Number_2);
		if(Number_1>Number_2)
		     {
			Bigger=Number_1;
		     }	
		else	
		     {			
			Bigger=Number_2;
	             }
	printf("%d is biggest between %d and %d\n",Bigger,Number_1,Number_2);
}
