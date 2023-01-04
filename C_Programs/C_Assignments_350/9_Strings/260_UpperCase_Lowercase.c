#include<stdio.h>

void main()
{
        char String_Name[50];
        int i;
        printf("Enter a Uppercase string to change into Lowercase\n");
        gets(String_Name);
        for(i=0;   String_Name[i]!='\0';    i++)
        {
               if(String_Name[i]>='A' && String_Name[i]<='Z' )
                {
                        String_Name[i]= String_Name[i] + 32;
                }
        }
        printf("Uppercase to Lowercase string is\n%s\n",String_Name);
}

