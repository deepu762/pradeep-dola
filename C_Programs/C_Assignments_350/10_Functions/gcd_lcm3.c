/* WITH RETURN TYPE WITH ARGUMENTS
******************************************************************************/

#include<stdio.h>
int gcd_lcm(int , int);

void main()
{
	int Lcm ,Gcd ,Num1 ,Num2 ;
        printf("Enter any 2 numbers\n");
        scanf("%d%d", &Num1 , &Num2) ;
        Gcd = gcd_lcm( Num1 , Num2 ) ;
	Lcm = Num1 * Num2 / Gcd;
        printf("Lcm of numbers %d and %d is %d.\nGcd of the numbers %d and %d is %d.\n",Num1 , Num2 , Lcm , Num1, Num2 , Gcd);
}

int gcd_lcm(int Num1,int Num2)
{
	int Remainder,Numerator,Denominator;
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
        return Denominator ;
}

