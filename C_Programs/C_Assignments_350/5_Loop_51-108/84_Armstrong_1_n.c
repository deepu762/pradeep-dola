#include<stdio.h>
#include<math.h>

void main()
{
        int c=1,Sum=0,Rem,Number,i1,i2,i=1;
        printf("Enter a number \n");
        scanf("%d",&Number);
	printf("The armstrong number/numbers from 1 to %d is/are ",Number);
	while(i<=Number)
	{
		i1=i2=i;
		c=1,Sum=0;
        	while((i1/=10)!=0)
        	{
                	 c++;
        	}
       			while(i2!=0)
        		{
                       		Rem=i2%10;
                       		Sum=Sum+pow(Rem,c);
				i2/=10;
        		}
        			if(i==Sum)
				printf("%d,",i);
				i++;
	}
			printf("\n");
}
