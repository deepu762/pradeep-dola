#include<stdio.h>

void main()

{
	int Num1,Num,Remiander,Reverse=0;
	printf("Enter a number \n");
	scanf("%d",&Num);
	Num1=Num;
	while(Num>0)
	{
		Remiander=Num%10;
		Reverse=Reverse*10+Remiander;
		Num=Num/10;
	}
	printf("The reverse of the given number %d is %d \n",Num1,Reverse);
}
