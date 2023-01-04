/*#include<stdio.h>

void sum(void);                         //declaration//
void main()
{
        sum();                          //function calling//
}

float sum()                              //function definition)//
{
        float a,b,Sum;
        printf("Enter 2 numbers\n");
        scanf("%f%f",&a,&b);
        Sum=a+b;
        printf("The addition is %f\n",Sum);
}
*************************************************************************************************
/*
prgm_2_function.c:9:7: error: conflicting types for ‘sum’; have ‘float()’
    9 | float sum()                              //function definition)//
      |       ^~~
prgm_2_function.c:3:6: note: previous declaration of ‘sum’ with type ‘void(void)’
    3 | void sum(void);                         //declaration//
      |      ^~~
*************************************************************************************************
*/

#include<stdio.h>

float sum(void);                         //declaration//
void main()
{
        sum();                          //function calling//
}

float sum()                              //function definition)//
{
        float a,b,Sum;
        printf("Enter 2 numbers\n");
        scanf("%f%f",&a,&b);
        Sum=a+b;
        printf("The addition is %f\n",Sum);
}
**********************************************************************************************************
Enter 2 numbers
10.0 20.6
The addition is 30.600000
**********************************************************************************************************
