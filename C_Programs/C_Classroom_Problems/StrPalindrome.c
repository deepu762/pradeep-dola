#include<stdio.h>

void main()
{
        char String_Name1[20],String_Name2[20];
        int i,j,Count=0,Count1=0;
        printf("Enter 1 string name\n");
        scanf("%s",String_Name1);
        for(i=0;   String_Name1[i]!='\0';   i++)
        {
                Count++;
        }
        for(j=0;   j<Count;  j++)
        {
                i--;
                String_Name2[j]=String_Name1[i];
        }
	for(i=0,Count1=0;   String_Name1[i]!='\0';  i++)
	{
		if(String_Name1[i]!=String_Name2[i])
		{
			break;
		}
		Count1++;
	}
	if(Count1++==Count)
	printf("The given string %s is a palindrome\n",String_Name1);
	else
	printf("The given string %s is not a palindrome\n",String_Name1);
}


