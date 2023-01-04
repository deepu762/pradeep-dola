#include<stdio.h>

void main()
{
        int Num,Num1,Product=1,Rem=0;
        printf("Enter a number to find Product of it's digits \n");
        scanf("%d",&Num);
        Num1=Num;
        while(Num1>0)
        {
                Rem=Num1%10;
                Product=Product*Rem;
                Num1=Num1/10;
        }
        printf("Product of the digits of the number %d is %d\n",Num,Product);
}                                    
