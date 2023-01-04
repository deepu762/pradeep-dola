#include<stdio.h>

void main()
{
	FILE *Fp;
	char ch;
	Fp = fopen ( "File1.txt", "w");
	printf("Enter a character\n");
	scanf("%c",&ch);
	fputc(ch,Fp);
	fclose(Fp);
}
