/*274--Write a C program to find highest frequency character in a string.
**************************************************************************/

#include<stdio.h>

void main()
{
        char String_Input_1[50];
        int Init_Value_i,Init_Value_j,,Total_Count=1,Max=1;
	printf("Enter a String name:\n");
        gets(String_Input_1);
        for(Init_Value_i=0 ;	String_Input_1[Init_Value_i]='\0'	;  Init_Value_i++)
	{
		for(Init_Value_j=Init_Value_i+1 ;    String_Input_1[Init_Value_j]='\0' ;  Init_Value_j++)
		{	
			if(String_Input_1[Init_Value_i]==String_Input_1[Init_Value_j])
			{
				Total_Count++;
				index=j;
			}
			else
			{
				Total_Count=1;
			}
		}
				if(Max<Total_Count)
				{
				 Max=Total_Count;
				 Index=Init_Value_i;
				 }
				
