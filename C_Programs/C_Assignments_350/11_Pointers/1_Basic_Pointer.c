
#include <stdio.h>
void main()
{
	int number = 20;  //compile time initialization
	int *pnt;	  //Pointer Declaration
	pnt = &number;    //Pointer Initialization with address of the variable 
	printf("The number is: %d", number);				//value of number-20
	printf("\nThe address of the number is: %p", &number);		//address of the number-
	printf("\nThe pointer address is: %p", pnt);			//pointer addressing to-adress of the variable-
	printf("\nThe address of the pointer is: %p", &pnt);		//address of the pointer.
	printf("\nThe value of the pointer is: %d\n", *pnt);		//value of the pointer=value of the variable.
}
