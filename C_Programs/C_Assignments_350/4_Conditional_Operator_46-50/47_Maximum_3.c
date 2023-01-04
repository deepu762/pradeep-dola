/*#include<stdio.h>

void main()
{
	int a,b,c,max;
	printf("enter 3 numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?(a>c?a:c):((b>c)?b:c);
	printf("max value is %d\n",max);
}


#include<stdio.h>

void main()
{
        int a,b,c,d,max;
        printf("enter 4 numbers \n");
        scanf("%d%d%d%d",&a,&b,&c,&d);
        max=((a>b)&&(a>c)&&(a>d))?a:(((b>c)&&(b>d))?b:((c>d)?c:d));
        printf("max value is %d\n",max);
}*/

#include<stdio.h>

void main()
{
        int a,b,c,d,e,max;
        printf("enter 5 numbers \n");
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        max=(a>b)&&(a>c)&&(a>d)&&(a>e)?a:((b>c)&&(b>d)&&(b>e)?b:((c>d)&&(c>e)?c:(d>e?d:e)));
        printf("max value is %d\n",max);
}



