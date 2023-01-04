#include<stdio.h>

void main()
{
	int i,j,Number,c=0;
	printf("Enter a Number\n");
	scanf("%d",&Number);
	for(i=2;i<Number;i++)
	{
		c=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
			c++;
			}
		}
		if(c==1)
		printf("%d\t",i);
		
	}
		
}	
