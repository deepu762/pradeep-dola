#include<stdio.h>
void main()
{
        long int i=1,Count=1,Number;
        printf("Enter a Number\n");
        scanf("%ld",&Number);
        while(i<=Number)
        {
              Count*=i;
              i++;
        }
        printf("The factorial of %ld is %ld\n",Number,Count);
}

