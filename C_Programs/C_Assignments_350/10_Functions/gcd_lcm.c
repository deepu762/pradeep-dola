/* 
NO RETURN TYPE NO ARGUMENTS
******************************************************************************/

#include<stdio.h>
void gcd_lcm(void);

void main()
{
	gcd_lcm();
}

void gcd_lcm(void)
{
	int Lcm ,Gcd ,Num1 ,Num2 ,Numerator ,Denominator, Remainder;
	printf("Enter any 2 numbers\n");
	scanf("%d%d", &Num1 , &Num2);
	if (Num1 > Num2)
	{
		  Numerator = Num1;
		Denominator = Num2;
	}
	else
	{
		  Numerator = Num2;
                Denominator = Num1;
	}
	Remainder = Numerator % Denominator ;
	while(Remainder != 0)
	{
		Numerator   = Denominator;
		Denominator = Remainder;
		Remainder   = Numerator % Denominator ;
	}
	Gcd = Denominator ;
	Lcm = Num1 * Num2 / Gcd;
	printf("Lcm of numbers %d and %d is %d\nGcd of the numbers and %d\n",Num2 , Num2 , Lcm , Gcd);
}

	

