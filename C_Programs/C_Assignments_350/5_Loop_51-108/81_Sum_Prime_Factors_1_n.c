#include<stdio.h>

void main()
{
        int i=2,j=1,c=0,Number,Sum=0;
        printf("Enter a number \n");
        scanf("%d",&Number);
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
		Sum=Sum+i;
                i++;
        }
        printf("The sum of prime numbers upto %d is %d\n",Number,Sum);
}
