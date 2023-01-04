#include<stdio.h>

void main()
{
	int Amount,Note_500,Note_200,Note_100,Note_50,Note_20,Note_10,Total;
	printf("Enter any amount to find the number of notes\n");
	scanf("%d",&Amount);
	if(Amount<=0)
	{	
		printf("Number of notes cannot be found by using the amount \n");
	}
	else
	{
	if(Amount>=500)
	{
		Note_500=Amount/500;
		Amount-=500*Note_500;
	}
	if(Amount>=200)
	{
		Note_200=Amount/200;
		Amount-=200*Note_200;
	}
	if(Amount>=100)
	{
		Note_100=Amount/100;
		Amount-=100*Note_100;
	}
	if(Amount>=50)
	{
		Note_50=Amount/50;
		Amount-=50*Note_50;
	}
	if(Amount>=20)
	{		
		Note_20=Amount/20;
		Amount-=20*Note_20;
	}
	if(Amount>=10)
	{
		Note_10=Amount/10;
		Amount-=10*Note_10;
	}
	Total=Note_500+Note_100+Note_50+Note_20+Note_10+Note_10;
	printf("The Total no of notes are %d\n500 ruppes notes=%d\n200 rupees notes=%d\n",Total,Note_500,Note_200);
	printf("100 rupees notes=%d\n50 rupees notes=%d\n20 rupees notes=%d\n10 rupees notes=%d\n",Note_100,Note_50,Note_20,Note_10);
}
}
