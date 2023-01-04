#include<stdio.h>

void main()
{
        int i=1,j,Number,c=0;
        printf("Enter a number to print perfect number. \n");
        scanf("%d",&Number);
	printf("The perfect numbers from 1 to %d is/are ",Number);
        while(i<=Number)
        {
		j=1;
		c=0;
		while(j<i)
		{
			if(i%j==0)
			     c+=j;
			     j++;		     
		}
    	        if(c==i)
		{
		printf("%d,",i);
		}
		i++;
			   
	}
	printf("\n");
}
