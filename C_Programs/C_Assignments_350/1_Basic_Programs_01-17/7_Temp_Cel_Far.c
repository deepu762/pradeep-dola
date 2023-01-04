#include<stdio.h>

void main()
{
	float c,f;
	printf("Enter temperature in celsius\n");
        scanf("%f",&c);
	f=((c*1.8)+32);	
	printf("The temperature of the given celsius %0.2f degree celius is %0.3f degree farenheit \n",c,f);
}
