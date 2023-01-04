#include<stdio.h>

void main()
{
	FILE *Fp;
	char ch ='a';
	Fp = fopen( "File1.txt" , "w");
	fputc (ch ,Fp);
	fclose (Fp);
}
