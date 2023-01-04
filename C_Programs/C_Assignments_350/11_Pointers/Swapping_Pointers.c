#include <stdio.h>
void swap(int *a,int *b);					//prototype
void main()
{
int a,b;
a = 5;
b = 10;
printf("\nBefore swapping a= %d: b= %d", a, b);
swap(&a, &b);                     				//call function
printf("\nAfter swapping a= %d: b= %d", a, b);
}
void swap(int *a, int *b)					//definition
{
int x;
x = *b;
*b = *a;
*a = x;
}

