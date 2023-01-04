#include<stdio.h>

void main()
{
        char c;
        printf("Enter a character\n");
        scanf("%c",&c);
       	if(((c>='a')&&(c<='z'))||((c>='A')&& (c<='Z')))
             {
             	printf("%c is an  Alphabet\n",c);
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
                                                                                                                                                                                             
                                                                          
