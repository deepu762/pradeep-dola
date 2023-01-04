#include<stdio.h>

int sum(void);                 //declaration//
float sub(void);                 //declaration//
void main()
{
        sum();
        printf("hello\n");
        sub();
        printf("hello\n");              //function calling//
        sub();
}

int sum()                              //function definition)//
{
        int a,b,Sum;
        printf("Enter 2 numbers\n");
        scanf("%d%d",&a,&b);
        Sum=a+b;
        printf("The addition is %d\n",Sum);
}

float sub()                              //function2 definition)//
{
        float a,b,Sub;
        printf("Enter 2 numbers\n");
        scanf("%f%f",&a,&b);
        Sub=a-b;
        printf("The difference is %f\n",Sub);
}

