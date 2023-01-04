#include<stdio.h>
void main()
{
	int a[10],b[10],c[10],i;
	printf("enter array elementsi\n");
	for(i=0 ;i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter b array elements\n");
        for(i=0 ;i<5; i++)
        {
                scanf("%d",&b[i]);
        }
        for(i=0 ;i<5; i++)
        {       
		
                a[c+i]=b[i];
        }       
	printf("The array elements are \n");
        for(i=0 ;i<10; i++)
        {       
                printf("%d\t",a[i]);
        }
 	printf("\n");	
}

