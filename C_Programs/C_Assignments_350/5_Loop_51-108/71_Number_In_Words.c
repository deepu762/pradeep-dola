#include<stdio.h>

void main()
{
	int Number,Remainder,Reverse=0;
	printf("Enter a number \n");
	scanf("%d",&Number);
	while(Number>0)
	{
		Remainder=Number%10;
		Reverse=Reverse*10+Remainder;
		Number/=10;
	}
	Number=Reverse;
        while(Number>0)
        {
                Remainder=Number%10;
                {
                if(Remainder==0)
                printf("Zero\t");
                else if(Remainder==1)
                printf("One\t");
                else if(Remainder==2)
                printf("Two\t");
                else if(Remainder==3)
                printf("Three\t");
                else if(Remainder==4)
                printf("Four\t");
                else if(Remainder==5)
                printf("Five\t");
                else if(Remainder==6)
                printf("Six\t");
                else if(Remainder==7)
                printf("Seven\t");
                else if(Remainder==8)
                printf("Eight\t");
                else if(Remainder==9)
                printf("Nine\t");
		}
		Number=Number/10;
	}
	printf("\n");
}
	
