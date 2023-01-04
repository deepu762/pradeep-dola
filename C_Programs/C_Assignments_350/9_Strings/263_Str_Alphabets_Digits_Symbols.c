#include<stdio.h>

void main()
{
	char String_Name[50];
	int i,Alphabets=0,Digits=0,Special_Symbols=0;
	printf("Enter a string to find the no of alphabets,digits and special characters\n");
	gets(String_Name);
	for(i=0; String_Name[i]!=0 ; i++)
	{
		if((String_Name[i]>='A' && String_Name[i]<='Z')||(String_Name[i]>='a' && String_Name[i]<='z'))
		{
			Alphabets++;
		}
		else if(String_Name[i]>='0' && String_Name[i]<='9')
		{
			Digits++;
		}
		else
		{
			Special_Symbols++;
		}
	}
	printf("The number of alphabets is %d\nThe number of digits is %d\nThe number of special symbols is %d\n",Alphabets,Digits,Special_Symbols);
}

