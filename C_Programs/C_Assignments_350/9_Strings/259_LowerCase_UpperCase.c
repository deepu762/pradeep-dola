#include<stdio.h>

void main()
{
	char String_Name[50];
	int i;
	printf("Enter a lowercase string to change into uppercase\n");
	gets(String_Name);
	for(i=0;   String_Name[i]!='\0';    i++)
	{
		if(String_Name[i]>='a' &&  String_Name[i]<='z')
		{
			String_Name[i]=String_Name[i]-32;
		}
	}
	printf("Lowercase to uppercase string is\n%s",String_Name);
}

