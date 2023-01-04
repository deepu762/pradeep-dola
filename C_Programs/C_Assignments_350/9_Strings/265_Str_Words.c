#include<stdio.h>

void main()
{
	char String_Name[50];
	int i,words=1;
	printf("Enter a string to find no of words\n");
	gets(String_Name);
	for(i=0; String_Name[i]!='\0' ;i++)
	{
		if(String_Name[i]==' ')
		{
		words++;
		}
	}
	printf("No of words is %d\n",words);
}
