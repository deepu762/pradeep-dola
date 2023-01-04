#include<stdio.h>

/*void main()
{
	int Count,Remainder,Number,i=1;
	printf("Enter a Number\n");
	scanf("%d",&Number);
	printf("The factors of %d are ",Number);
	while(i<=Number)
	{
		Remainder=Number%i;
		if(Remainder==0)
		{
			printf("%d,",i);
			Count++;
		}
		i++;
	}
	printf("\nThe no of factors of %d is %d\n",Number,Count);
}
*/
void main()
{
        int Count,Remainder,Number,i;
        printf("Enter a Number\n");
        scanf("%d",&Number);
        printf("The factors of %d are ",Number);
        for(i=1;i<=Number;i++)
        {
                Remainder=Number%i;
                if(Remainder==0)
                {
                        printf("%d,",i);
                        Count++;
                }
        }
        printf("\nThe no of factors of %d is %d\n",Number,Count);
}

