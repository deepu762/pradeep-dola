#include<stdio.h>

void main()
{
	char String_Name[50];
        int i,j,Count=0,Count1=0;
        printf("Enter a string name\n");
        gets(String_Name);
        for(i=0;String_Name[i]!='\0';i++)
        {
		if(String_Name[i]!=' ')
		{
			Count1++;
			if(String_Name[i]=='a'||String_Name[i]=='e'||String_Name[i]=='i'||String_Name[i]=='o'
				||String_Name[i]=='u'||String_Name[i]=='A'||String_Name[i]=='E'||String_Name[i]=='I'
				||String_Name[i]=='O'||String_Name[i]=='U')
			{
			Count++;
			}
                }
	}
        printf("The Vowels in the String is %d\nThe consonants in the String is %d\n",Count,(Count1-Count));
}

