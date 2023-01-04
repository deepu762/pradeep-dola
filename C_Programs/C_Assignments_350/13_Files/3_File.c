#include<stdio.h>

void main()
{
	
	FILE *fp;
	char Str[50];
	printf("Enter a string\n");
       	gets(Str);
	fp = fopen( "File1.txt", "w") ;
	fputs(Str, fp) ;
	fclose (fp);
}

