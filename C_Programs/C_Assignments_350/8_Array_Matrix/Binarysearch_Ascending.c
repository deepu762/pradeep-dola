#include<stdio.h>

void main()
{
        int A[20],Temp,Num,i,j,Low=0,Mid,High,Key;
        printf("Enter the number of elements:\n");
        scanf("%d",&Num);
        printf("Enter the Array Elements:\n");
        for(i=0 ;i<Num ;i++ )
        {
                scanf("%d",&A[i]);
        }
        for(i=0 ;i<Num ;i++)
        {
                for(j=i+1 ;j<Num ;j++)
                {
                        if(A[i]>A[j])
                        {
                                Temp=A[i];
                                A[i]=A[j];
                                A[j]=Temp;
                        }
                }
        }
        printf("The sorted  order of the given numbers is:");
        for(i=0  ;i<Num  ;i++)
        {
                printf("%d ",A[i]);
        }
	printf("\nEnter a number to find in the list:\n");
	scanf("%d",&Key);
	High=Num-1;
	Mid=(Low+High)/2;
	while(Low<=High)
	{
		if(Key==A[Mid])
		{
		  	printf("%d is found at location %d\n",Key,Mid+1);
		  	break;
		}
		else if(Key>A[Mid])
		{
			Low=Mid+1;
		}
		else
		{
			High=Mid-1;
		}
		Mid=(Low+High)/2;
	}
	if(Low>High)
	printf("%d is not found \n",Key);
}
