/*#include<stdio.h>

void main()
{
	int i=1,Number,Number1,Power,Power1=1;
	printf("Enter the Number and Power of the number \n");
	scanf("%d%d",&Number,&Power);
	Number1=Number;
	while(i<=Power)
	{
		Power1*=Number;
		i++;
	}
	printf("The power of the given number is %d is %d\n",Number1,Power1);
}*/

#include<stdio.h>

void main()
{
        int i,Number,Number1,Power,Power1=1;
        printf("Enter the Number and Power of the number \n");
        scanf("%d%d",&Number,&Power);
        Number1=Number;
        for(i=1;i<=Power;i++)
        {
                Power1*=Number;
        }
        printf("The power of the given number is %d is %d\n",Number1,Power1);
}

