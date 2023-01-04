#include<stdio.h>

void main()
{
	char A;
	printf("Enter a character\n");
	scanf("%c",&A);
	((A>='a')&&(A<='z')||(A>='A')&&(A<='Z'))?printf("%c is an alphabet \n",A):printf("%c is not an alphabet \n",A);
}
