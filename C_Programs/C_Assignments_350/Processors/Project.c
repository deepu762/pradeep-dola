#include "arithmetic.h"
#include <stdio.h>

int main()
{
       int a,b,c,d,e,f;
       printf("Enter Two Numbers \n");
       scanf("%d%d",&a,&b);
       c=add(a,b);
       d=sub(a,b);
       e=mul(a,b);
       f=div(a,b);
       printf("The sum is %d\nThe difference is %d\nThe product is %d\nThe division is %d\n",c,d,e,f);
} 
