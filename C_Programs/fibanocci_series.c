#include<stdio.h>
void main()
{
	int num1=0,num2=1,flag=0,key,sum=0;
	printf("enter a number\n");
	scanf("%d",&key);
	while(sum<=key)
	{
		if(key==sum||num1||num2)
		{
			flag++;
	
		}
		num1=num2;
		num2=sum;
		sum=num1+num2;
		printf("%d\n",sum);
	}
	if(flag>=1)
	printf("fibonnicci term is found");
	else
	printf("fibanocci number is not found");

}

