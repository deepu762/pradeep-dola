#include<stdio.h>

void main()
{
        char c;
        printf("Enter a character\n");
        scanf("%c",&c);  
        if((c>='a')&&(c<='z'))
		{
		printf("%c is a lowercase character \n",c);
		}
		else if((c>='A')&&(c<='Z'))
             		{
             		printf("%c is a Uppercase Character\n",c);
             		}
                	else if((c>='0')&&(c<='9'))
                                {
                                printf("%c is a digit\n",c);
                                }
                                else
                                {
                                printf("%c is a special character\n",c);
                                }
}

                                                                                                                                                                                                                                                                    
