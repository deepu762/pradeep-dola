#include<stdio.h>

void main()
{
        char Name1[20],Name2[20];
        int i,j,Count=0;
        printf("Enter 1 string name\n");
        scanf("%s",Name1);
        printf("Enter 2 string name\n");
        scanf("%s",Name2);
        for(i=0;Name1[i]!='\0';i++)
        {
            
        }
	for(j=0;Name2[j]!='\0';j++)
	{
		Name1[i]=Name2[j];
		i++;
	}
        printf("The Combined String is %s\n",Name1);
}

