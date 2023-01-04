#include<stdio.h>

void main()
{
        char Name1[20],Name2[20];
        int i,j,Count=0;
        printf("Enter 1 string name\n");
        scanf("%s",Name1);
        for(i=0;Name1[i]!='\0';i++)
        {
                Name2[i]=Name1[i];
        }
        printf("The original string and copied string is %s and %s\n",Name1,Name2);
}


