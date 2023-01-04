#include<stdio.h>
void main()
{
int Number1 = 20,Number2 = 40;
int *pnt1,*pnt2;
pnt1 = &Number1;
pnt2 = &Number2;
printf("The numbers are: %d,%d", Number1,Number2);
printf("\nThe addresses of the number1 & number2 are: %p,%p", &Number1,&Number2);
printf("\nThe pointer1 address and pointer 2 addresses are: %p,%p", pnt1,pnt2);
printf("\nThe address of the pointers are: %p,%p", &pnt1,&pnt2);
printf("\nThe value of the pointers are: %d,%d", *pnt1,*pnt2);
printf("\nThe sum of values of the number1 & number2 is: %d\n",*pnt1+*pnt2);
}
