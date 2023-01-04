#include<stdio.h>

void main()
{
        int i=1,j,c,Number;
        printf("Enter a number\n");
        scanf("%d",&Number);
	printf("The prime factors of %d is/are ",Number);
        while(i<=Number)
        {
                j=1;
                c=0;
                while(j<=i)
                {
                        if(i%j==0)
                        {
                        c++;
                        }
                        j++;
                }
                if(c<=2)
		{
		if(Number%i==0)	
		printf("%d,",i);
		}
		i++;
		
        }
        printf("\n");
}


