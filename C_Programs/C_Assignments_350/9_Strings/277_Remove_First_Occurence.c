/*Write a C program to remove first occurrence of a character from string.
 
*******************************************************************************************/

#include<stdio.h>

void main()
{
        char String_Name1[50],String_Name2,String_Name3[50];
        int i,j;
        printf("Enter a String name:\n");
        gets(String_Name1);
        printf("Enter a Character to Remove the first occurence:");
        scanf("%c",&String_Name2);
        for(i=0;  String_Name1[i]!=String_Name2; i++);
	for(j = i+1 ; String_Name1[i] != '\0'  ;  j++,i++)
		{
			String_Name1[i]=String_Name1[j];
		}
         printf("String after  Removing  the first occurence is %s\n",String_Name1);
}

