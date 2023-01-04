#include<stdio.h>

void main()
{
	int i=0;
	char ch;
	while(i<=127)
	{
		printf("Ascii values of %c is %d\n",ch,i);
		i++;
		ch++;
	}
	printf("\n");
}
