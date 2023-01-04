#include<stdio.h>

void main()
{
	char String_Name[50];
	int i;
	printf("Enter any string to find the toggle case\n");
	gets(String_Name);
	for(i=0  ;String_Name[i]!='\0' ; i++)
	{
		if(String_Name[i]>='A' && String_Name[i]<='Z')
		{
			String_Name[i]=String_Name[i]+32;
		}
		else if(String_Name[i]>='a' && String_Name[i]<='z')
		{
			String_Name[i]=String_Name[i]-32;
		}
	}
	printf("The toggle case of each character of string is \n%s\n",String_Name);
}
