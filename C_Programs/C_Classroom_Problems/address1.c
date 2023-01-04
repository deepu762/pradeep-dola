/*
#include<stdio.h>

void main()
{
	int Address,Remainder;
	printf("Enter any address value");
	scanf("%x",&Address);
	Remainder=Address%4;
	if(Remainder==0)
	{
	 	printf("Address for given number is %x",Address);
	}
	else if(Remainder==1)
	{
		Address=Address+3;
		printf("Address for given number is %x",Address);
	}
	else 
	{
		Address=Address+(4-Remainder);
		printf("Address for given number is %x ",Address);
	}
}
*/

#include<stdio.h>

void main()
{
        long int Address,Remainder;
        printf("Enter any address value");
        scanf("%ld",&Address);
        Remainder=Address%8;
        if(Remainder==0)
        {
                printf("Address for given number is %ld",Address);
        }
        else if(Remainder==1)
        {
                Address=Address+7;
                printf("Address for given number is %ld",Address);
        }
        else
        {
                Address=Address+(8-Remainder);
                printf("Address for given number is %ld",Address);
        }
}

