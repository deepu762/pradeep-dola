#include<stdio.h>

void main()
/*{
	int Num,Num1,c=0;
	printf("Enter any number\n");
	scanf("%d",&Num);
	Num1=Num;
	do
	{
	 	Num/= 10;
		c++;
	}
	while(Num!=0);
	printf("The number of digits in the number %d is %d \n",Num1,c);
}*/
{
        int Num,c=0;
        printf("Enter any number\n");
        scanf("%d",&Num);
    	while(num!=0)
        {
                Num/=10;
                c++;
        }
        printf("The number of digits in the number %d is %d \n",Num1,c);
}



