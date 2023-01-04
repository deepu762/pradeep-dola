/*Write a C program to remove last occurrence of a character from string.

******************************************************************************************/
#include<stdio.h>

void main()
{
        char String_Name1[50],String_Name2;
        int i,j,k,a=0;
        printf("Enter a String name:\n");
        gets(String_Name1);
        printf("Enter a Character to Remove the first occurence:");
        scanf("%c",&String_Name2);
        for(i=0; String_Name1[i] != '\0' ; i++)
	{
		if (String_Name1[i]==String_Name2)
		{
			k=i;
		}
	}
	for(;k<=i-2 ;k++)
                {
			printf("%d",k);
                        String_Name1[k]=String_Name1[k+1];
                }
         printf("String after  Removing  the first occurence is %s\n",String_Name1);
}

