//Wapc to find the lcm of two numers//

/*#include<stdio.h>

void main()
{
        int Max,Number1,Number2,i=1,gcd,lcm;
        printf("Enter two Number\n");
        scanf("%d%d",&Number1,&Number2);
	while((i<=Number1)&&(i<=Number2))
	{
		if((Number1%i==0)&&(Number2%i==0))
                {
                        gcd=i;
                }
			i++;
	}        
	lcm=(Number1*Number2)/gcd;
        printf("The lcm of %d and %d is %d\n",Number1,Number2,lcm);
}
*/
#include<stdio.h>

void main()
{
        int Lcm,Number1,Number2,i,Max;
        printf("Enter two Number\n");
        scanf("%d%d",&Number1,&Number2);
        Max=Number1>Number2?Number1:Number2;
        i=Max;
        while(1)
        {
               if((i%Number1==0)&&(i%Number2==0))
                {
                        Lcm=i;
                        break;
                }
                i+=Max;
        }
        printf("Lcm of %d and %d is %d\n",Number1,Number2,Lcm);
}

