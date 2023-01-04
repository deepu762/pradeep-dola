#include<stdio.h>

void main()
{
        char String_Name1[50],String_Name2;
        int i,Count=0;
        printf("Enter a String name:\n");
        gets(String_Name1);
        printf("Enter a Character to find the count of occurence:");
        scanf("%c",&String_Name2);
        for(i=0;  String_Name1[i]!='\0' ; i++)
        {
                if(String_Name1[i]==String_Name2)
                {
                      Count++;
		}
	}	
		printf("%c occures for %d times\n",String_Name2,Count);
}

