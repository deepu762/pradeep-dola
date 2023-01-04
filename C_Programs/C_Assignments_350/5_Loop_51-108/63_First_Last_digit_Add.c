#include<stdio.h>

void main()
{
        int Num,Last_Digit,Sum;
        printf("Enter a number\n");
        scanf("%d",&Num);
        Last_Digit=Num%10;
        while(Num>10)
        {
        Num/=10;
        }
	Sum=Num+Last_Digit;
        printf("The first digit and last digit is %d and %d and the sum is %d\n",Num,Last_Digit,Sum);
}

