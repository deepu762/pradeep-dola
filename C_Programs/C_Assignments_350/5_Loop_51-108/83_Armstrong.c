#include<stdio.h>
#include<math.h>

void main()
{
        int c=1,Sum=0,Rem,Number,Number1,Number2;
        printf("Enter a number \n");
        scanf("%d",&Number);
	Number1=Number2=Number;
        while((Number/=10)!=0)
        {
                 c++;
	}
	while(Number1>0)
        {
		       Rem=Number1%10;
                       Sum=Sum+pow(Rem,c);
		       Number1/=10;
	}
        (Number2==Sum)?printf("%d is armstrong\n",Number2):printf("%d is not armstrong\n",Number2);
}

