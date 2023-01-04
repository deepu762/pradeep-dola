#include<stdio.h>

void main()
{
	char Name[20];
	int i,Count=0;
	printf("Enter any string name\n");
	gets(Name);
	for(i=0;Name[i]!='\0';i++)
	{
             if(Name[i]!=' ')
	     {
		     Count++;
	     }
	}
	printf("String Length is %d\n",Count);
}
