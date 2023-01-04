#include<stdio.h>

void main()
{
        int i=2,j,Number,c,d;
        printf("Enter a Number\n");
        scanf("%d",&Number);
	for(c=1;c<=Number;i++)
        {
		d=0;
		for(j=2;j<=i;j++)
         	{
         	if(i%j==0)
		d++;
         	}
       		if(d==1)
		{
		printf("%d\t",i);
		c++;	
		}
		
	}
}
