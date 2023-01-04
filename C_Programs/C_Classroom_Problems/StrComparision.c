#include<stdio.h>

void main()
{
        char Name1[20],Name2[20];
        int i,Count=0;
        printf("Enter 1 string name\n");
        gets(Name1);
	printf("Enter 2 string name\n");
	gets(Name2);
        for(i=0;Name1[i]!='\0'&& Name2[i]!='\0';i++)
        {
             if(Name1[i]==Name2[i])
             {
                     Count++;
             }
        }
	if(Count==i)
        printf("Strings are Identical\n");
	else
	printf("Strings are not Identical\n");
}

