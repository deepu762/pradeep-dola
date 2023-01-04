#include<stdio.h>

void main()
{
	int arr[20],num,i,temp;
	printf("Enter the size\n");
	scanf("%d",&num);
	printf("Enter elements of the matrix\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	temp=arr[0];
	arr[0]=arr[num-1];
	arr[num-1]=temp;
	for(i=0;i<num;i++)
        {
                printf("%d\n",arr[i]);
	}
}

