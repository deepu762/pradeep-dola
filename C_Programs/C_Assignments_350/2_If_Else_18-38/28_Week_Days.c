#include<stdio.h>

void main()
{
	int Day;
	printf("Enter a number between 1-7\n");
	scanf("%d",&Day);
	switch(Day)
	{	
	case 1:
		{
		printf("1=Monday\n");
		break;	
		}
	case 2:	
		{
		printf("2=Tuesday\n");
		break;
		}
	case 3:
		{
		printf("3=Wednesday\n");
		break;
		}
        case 4:
		{
                printf("4=Thursday\n");
		break;
		}
	case 5:
		{
		printf("5=Friday\n");
		break;
		}
	case 6:
		{
		printf("6=Saturday\n");
		break;
		}
	case 7:
		{
		printf("7=sunday\n");
		break;
		}
	default:
		{
		printf("Entered input is not a valid input\n");
		break;
		}
	}
}

