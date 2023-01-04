#include<stdio.h>

void sum(void);                 //declaration//
void sub(void);		        //declaration//
void main()
{
        sum();
       	printf("hello\n");	
	sub();		
	printf("hello\n");		//function calling//
	sub();
}
void sum()                              //function definition)//
{
        int a,b,Sum;
        printf("Enter 2 numbers\n");
        scanf("%d%d",&a,&b);
        Sum=a+b;
        printf("The addition is %d\n",Sum);
}

void sub()                              //function2 definition)//
{
        int a,b,Sub;
        printf("Enter 2 numbers\n");
        scanf("%d%d",&a,&b);
        Sub=a-b;
        printf("The difference is %d\n",Sub);
}


