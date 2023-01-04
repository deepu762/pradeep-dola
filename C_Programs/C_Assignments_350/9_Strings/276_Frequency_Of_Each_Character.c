/*276.Write a C program to count frequency of each character in a string.

*************************************************************************************************************/

#include<stdio.h>

void main()
{
        char String_Input[50];
        int Init_Value_i,Init_Value_j,Total_Count=1;
        printf("Enter a String:\n");
        gets(String_Input);
        for(Init_Value_i=0;  String_Input[Init_Value_i]!='\0' ; Init_Value_i++)
        { 	
            
		Total_Count=1;
		for(Init_Value_j=Init_Value_i+1;  String_Input[Init_Value_j]!='\0' ; Init_Value_j++)
		{
			if( String_Input[Init_Value_i]  ==  String_Input[Init_Value_j] )
               		{
                     		 Total_Count++;
				 String_Input[Init_Value_j]=' ';
			}
		}
		if(String_Input[Init_Value_i]!=' ')
       		printf("%c occures for %d times.\n",String_Input[Init_Value_i],Total_Count); 	
	}
}
