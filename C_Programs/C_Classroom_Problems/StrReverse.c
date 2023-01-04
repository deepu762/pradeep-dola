#include<stdio.h>

void main()
{
        char Name1[20],Name2[20],Name3[20];
        int i,j,count=0;
        printf("Enter 1 string name\n");
        scanf("%s",Name1);
        for(i=0;Name1[i]!='\0';i++)
        {
		Name3[i]=Name1[i];
		count++;
        }
	for(j=0;j<count;j++)
	{
		i--;
		Name2[j]=Name1[i];
	}
	printf("The old string is %s  and the reversed string is %s\n",Name3,Name2);
}	




