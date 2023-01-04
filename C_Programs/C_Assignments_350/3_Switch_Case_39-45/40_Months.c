#include<stdio.h>

void main()
{
        int Day;
        printf("Enter a number between 1-12\n");
        scanf("%d",&Day);
        switch(Day)
        {
        case 1:
                {
                printf("1-January=31 days\n");
                break;
                }
        case 2:
                {
                printf("2-Feburary-28 days\n");
                break;
                }
        case 3:
                {
                printf("3=March-31 Days\n");
                break;
                }
        case 4:
                {
                printf("4=April=30 Days\n");
                break;
                }
        case 5:
                {
                printf("5=May=31 Days\n");
                break;
                }
        case 6:
                {
                printf("6=June=30 Days\n");
                break;
                }
        case 7:
                {
                printf("7=July=31 Days\n");
                break;
                }
       case 8:
                {
                printf("8=August=30 Days\n");
                break;
                }
        case 9:
                {
                printf("9=September=30 Days\n");
                break;
                }
        case 10:
                {
                printf("10=October=31 \n");
                break;
                }
        case 11:
                {
                printf("11=November=30 Days \n");
                break;
                }
        case 12:
                {
                printf("12 =December=31 days\n");
                break;
                }
        default:
                {
                printf("The entered input is invalid");
                }
        }
}

