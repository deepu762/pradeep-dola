/*Write a C program to remove all occurrences of a character from string.

*****************************************************************************/

#include<stdio.h>

void main()
{
        char String_Name1[50],String_Name2;
        int i;
        printf("Enter a String name:\n");
        gets(String_Name1);
        printf("Enter a Character to Remove the first occurence:");
        scanf("%c",&String_Name2);
        for(i=0;  String_Name1[i]!='\0'; i++)
	{
		if(String_Name1[i]!=String_Name2)
                {
                        String_Name1[i]=String_Name1[i];
                }
		else
		{
			String_Name1[i]=String_Name1[i+1];
		}

	}
         printf("String after  Removing  the first occurence is %s\n",String_Name1);
}

