//WAPC to enter two numbers and find the gcd of the two numbers//


#include<stdio.h>
/*
void main()
{
        int Count=0,Number1,Number2,i=1;
        printf("Enter two Number\n");
        scanf("%d%d",&Number1,&Number2);
	printf("The highest common(G.C.D)factors of %d and %d are",Number1,Number2);
        while((i<=Number1)&&(i<Number2))
        {
               if((Number1%i==0)&&(Number2%i==0))
                {
                        printf("%d,",i);
                        Count++;
                }
                i++;
        }
        printf("\nThe no of highest common factors of %d and %d is %d\n",Number1,Number2,Count);
}

void main()
{
        int Count=0,Number1,Number2,i=1;
        printf("Enter two Number\n");
        scanf("%d%d",&Number1,&Number2);
        printf("The highest common(G.C.D)factors of %d and %d are ",Number1,Number2);
        for(i=1;((i<=Number1)&&(i<Number2));i++)
        {
               if((Number1%i==0)&&(Number2%i==0))
                {
                        printf("%d,",i);
                        Count++;
                }
               
        }
        printf("\nThe no of highest common factors of %d and %d is %d\n",Number1,Number2,Count);
}
*/

#include<stdio.h>

void main()
{
        int Hcf,Lcm,Number1,Number2,i,Max;
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
	Hcf=(Number1*Number2)/Lcm;
        printf("Greatest common factor of %d and %d is %d\n",Number1,Number2,Hcf);
}

